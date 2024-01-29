#include<iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>t;

    while(t--)
    {
        cin>>n;
        string str;
        cin>>str;
        string ans;
        int winreq=n/2;
        winreq++;
        int pad=n-winreq;
        
        int i=0;

        while(pad>0 && i<n)
        {
            ans.push_back('P');
            if(str[i]!='R')
            {
                pad--;
            }
            i++;
        }

        for(;i<n;i++)
        {
            if(str[i]=='S')
            {
                ans.push_back('R');
            }
            else if(str[i]=='R')
            {
                ans.push_back('P');
            }
            else
            {
                ans.push_back('S');
            }
        }

        cout<<ans<<endl;
       
    }
    return 0;
}





