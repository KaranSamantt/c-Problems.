#include<iostream>

using namespace std;

class Account{
    protected:
   int accountNumber;
   string holderName;
   float balance;
   public:

   Account() {
    accountNumber = 105;
    holderName = "Karan";
    balance = 0;
}

   void deposit(int d){
    balance += d;
   }
   virtual void withdraw(int w){
    if(w>balance){
        cout<<"\nInsufficient balance";
    }
    else{
        balance-=w;
        cout<<"\nWithdraw successful";
    }
   }
   void display(){
    cout<<"\nAccount number: "<<accountNumber;
    cout<<"\nHolder name: "<<holderName;
    cout<<"\nBalance: "<<balance;
   }

};

class SavingsAccount : public Account{
    float p=1000.0,r=5.6,t=3.2;
    public:
    void calculateInterest(){
        float interest = (p*r*t)/100.0f;
        cout<<"\nInterest amount : "<<interest;
    }
};

class CurrentAccount : public Account{
    int overdraftLimit;
    public:

    CurrentAccount(){
        overdraftLimit = 5000;
    }
    void withdraw(int w)override{
        
        if(w>balance + overdraftLimit){
            cout<<"\nDoesnt allowed!";
        }
        else{
            balance-=w;
            cout<<"\nWithdrawn successful!";
        }
    }
};

int main(){
    Account *ptr;

    SavingsAccount s1;
    CurrentAccount c1;

    ptr = &s1;

    ptr->deposit(2000);
    ptr->withdraw(500);
    ptr->display();

    s1.calculateInterest();


    cout<<"\n\n";

    ptr = &c1;

    ptr->deposit(1000);
    ptr->withdraw(200);
    ptr->display();

    

    cout<<"\n\n";



    return 0;
}