 // Dynamic Memory
 // h4.cpp

 #include <new>
 #include <iostream>
 using namespace std;
 #include "Transaction.h"

 int main() {
     int n; // user-specified number of Transactions
     Transaction* tr;

     cout << "Enter the number of Transactions : ";
     cin  >> n;
     tr = new (nothrow) Transaction[n];
     if (tr == nullptr) {
         cout << "Memory Allocation Error " << endl;
         return 1;
     }

     cout << "Enter " << n << " Transactions" << endl;
     for (int i = 0; i < n; i++)
         tr[i].enter();
     cout << endl;

     cout << "   Account Description             Credit     Debit" << endl; 
     for (int i = 0; i < n; i++) {
         tr[i].display();
         cout << endl;
     }

     delete [] tr;
 }