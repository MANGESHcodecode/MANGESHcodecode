//Scenario: Create a basic "Bank" system with a base class "Account" and two derived classes "Savings Account" and "Checking Account.
//" The "Account" class should have common properties and methods, while the derived classes add some specific features.
#include<iostream>
using namespace std;

class account
{
    public:
    void print_x()
    {
        cout<<" Do you know ?"<<endl;
        cout<<"this is your balance = 00000.00"<<endl;
    }
};

class savingaccount: public account
{
    public:
        void print()
        {
            cout<<"this is your saving account"<<endl;
        }
};

class checkingaccount: public account
{
    public:
        void print()
        {
            cout<<"checking your account"<<endl;
        }
};
int main()
{
    savingaccount a;
    checkingaccount b;

    a.print_x();
    b.print();
    return 0;
}


