#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string mergeAlternately(string word1, string word2) 
    {
        string ans="";
        int l1=word1.size();
        int l2=word2.size();

        for(int i=0;i<min(l1,l2);i++)
        {
            ans+=word1[i];
            ans+=word2[i];
        }
        
        if(l1==min(l1,l2))
        {
            for(int i=l1;i<l2;i++)
            {
                ans+=word2[i];
            }
        }
        else
        {
            for(int i=l2;i<l1;i++)
            {
                ans+=word1[i];
            }
        }
        return ans;
    }
int main()
{
    string s1,s2;cin>>s1>>s2;
    
    cout<<mergeAlternately(s1,s2)<<endl;
    return 0;
}
    



















