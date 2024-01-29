//best to understand the concept of mapping 
#include<iostream>
#include<vector>

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int sum=0;
    vector<int> a,b;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        m[a[i]]=max(m[a[i]],x);
    }
    int ans=0;
    for(auto p:m)
    {
        if(p.second>0)
        {
            ans+=p.second;
        }
    }
    cout<<ans<<endl;
    return 0;
}