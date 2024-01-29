#include<iostream>
using namespace std;

class employee
{
    public:
    void print()
    {
        cout<<"this is base class"<<endl;
    }
};

class PTE:public employee
{
    public:
    void print_d()
    {
        cout<<"this is derived class-part time employee"<<endl;
    }
};

int main()
{
    PTE e;
    e.print();
    e.print_d();
    return 0;
}


