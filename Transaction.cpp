 // Constructor and Destructor
 // Transaction.cpp

//  Upgrade the implementation file for your Transaction type:

//     add the function definition for the no-argument constructor
//     add the function definition for the empty destructor
//     complete the logic for the enter() member function, rejecting account numbers that aren't positive, amounts that aren't positive, and types that are neither 'c' nor 'd'
//     complete the logic for your display() query


 #include <iostream>
 #include <iomanip>
 using namespace std;
 #include "Transaction.h"



Transaction::Transaction() {
}

Transaction::~Transaction() {
}

 void Transaction::enter() {

     // local variables accept input temporarily
     int t_acct;
     char t_type;
     char t_desc[21] = "";
     double t_amount = 0;

     // store input from the user in the local variables
     cout << "Enter the account number : ";
     cin  >> t_acct;                             ;
     cin.ignore();
     cout << "Enter the desription : ";
     cin.getline(t_desc, 21);
     cout << "Enter the account type (d for debit, c for credit) : "; 
     cin  >> t_type;                             ;
     cout << "Enter the account amount : ";
     cin  >> t_amount;

     if ( t_acct < 0 || t_amount < 0 || t_type != 'd'|| t_type != 'c') {
         // copy validated input into the instance variables
         acct = t_acct;
         type = t_type;
         *desc = *(t_desc);
         amount = t_amount;
     }
     else {
         // input was invalid - adopt a safe empty state
         acct = 0;
         type = '0';
         *desc = {};
         amount = 0;
     }
 }

 void Transaction::display() const {

     if (acct > 0) {
         cout << setw(10) << acct;
         cout << ' ' << setw(20) << left << desc << right; 
         cout << setprecision(2) << fixed;
         if (type == 'd')
             cout << setw(20) << amount;
         else
             cout << setw(10) << amount;
     }
     else
         cout << "No valid data!" << endl;
 }