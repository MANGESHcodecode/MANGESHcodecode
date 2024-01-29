#include<iostream>
using namespace std;

bool ispower(int n)
{
    return (n && !(n & (n-1)));
}
int main()
{
    cout<<ispower(12)<<endl;
    return 0;
}

