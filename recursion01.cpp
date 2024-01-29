#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    int prevfact=factorial(n-1);
    return n*prevfact;
}
*/

//for print a number of fibonacci series
/*
int fibonacci(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }

    return fibonacci(n-1)+fibonacci(n-2);
}
*/

// code to check whether the given array is sorted or not

/*
bool sorted(int arr[],int n)
{
    if(n==1)
    {
        return true;
    }
    int restarray=sorted(arr+1,n-1);
    return(arr[0]<arr[1] && restarray);
}
*/
/*
void decrese(int n)
{
    if(n==0)
    {
        return ;
    }
    cout<<n<<endl;
    decrese(n-1);
}
*/

void inc(int n)
{
    if(n==0)
    {
        return ;
    }
    
    inc(n-1);
    cout<<n<<endl;
}
int main()
{
    int n;
    cin>>n;

    inc(n);
    return 0;
}











































