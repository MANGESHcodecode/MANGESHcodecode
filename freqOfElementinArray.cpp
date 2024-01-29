// freq of elements in an array
#include<iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

void printfreq(vector<int> v)
{
    map<int,int> m;
    for(int i=0;v[i];i++)
    {
        if(m.find(v[i])==m.end())
        {
            m[v[i]]=1;
        }
        else
        {
            m[v[i]]++;
        }

        for(auto &it:m)
        {
            cout<<it.first<<" ";
            cout<<it.second<<endl;
        }
    }
}
int main()
{
    vector<int> v={1,1,1,2,2,25,8,4,2,36,1,6};
    printfreq(v);
    return 0;
}
