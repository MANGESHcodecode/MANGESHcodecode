#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int reverse=0;
    while(n>0)
    {
        int last=n%10;       //this line should be inside the loop otherwise only one time the last digit is considered.
        reverse=reverse*10+last;
        n=n/10;
    }
    cout<<reverse;
}

