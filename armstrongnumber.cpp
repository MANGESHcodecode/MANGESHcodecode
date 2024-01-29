#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    int originalN=n;

    while(n>0)
    {
        int last=n%10;
        sum+=pow(last,3);
        n=n/10;
    }
    if(sum==originalN)
    {
        cout<<"ARMSTRONG"<<endl;
    }
    else
    {
        cout<<"NOT ARMSTORNG"<<endl;
    }
    return 0;
}
