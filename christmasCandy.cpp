#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    /*
    simply ye samaj ki first element liya and if wo kise aur element se small hua then update that
     currmax element otherwise count++ because according to 
    given condition if we observe the test cases the one which is at the left is greater than 
    any number which is at its right then the condition is satisfied .
    */
    
    int currmax=arr[0];
    int count=0;
    for(int i=0;i<n;i++)
    {
        
        if(arr[i]>currmax)
        {
            currmax=arr[i];
            
        }
        else
        {
            count++;
        }


    }
    cout<<count<<endl;
    return 0;
}



