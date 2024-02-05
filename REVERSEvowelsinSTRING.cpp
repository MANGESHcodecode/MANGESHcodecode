#include<bits/stdc++.h>
using namespace std;

     bool isvowel(char s)
    {
        if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u'||s=='A'||s=='E'||s=='I'||s=='O'||s=='U')
            {
                return true;
            }
            return false;
    }
    string reverseVowels(string s) 
    {
        int start =0;
        int end=s.size()-1;
        while(start<end)
        {
            if(isvowel(s[start]) && isvowel(s[end]))
            {
                swap(s[start],s[end]);
                start++;
                end--;
            }
            else if(isvowel(s[start]))
            {
                end--;
            }
            else
            {
                start++;
            }
        }
        return s;


    }

int main()
{
    string s;
    cin>>s;
    cout<<reverseVowels(s)<<endl;
    return 0;
}


