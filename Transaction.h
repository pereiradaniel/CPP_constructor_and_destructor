 // Constructor and Destructor
 // Transaction.h


//  Upgrade the header file for your Transaction type:

//     replace the keywords struct and private with the keyword class
//     add the prototype for the no-argument constructor
//     add the prototype for the destructor


class Transaction {
     int acct;
     char type;
     char desc[21];
     double amount;
   
   public:
     Transaction();
     ~Transaction();
     void enter();
     void display() const;
 };