//     string reverseWords(string s) {

//         string str[]=s.trim().split("\\s+");
//         string result="";
//         for(int i=str.size();i<0;i--)
//         {
//             result+=str[i]+" ";
//         }
        
//         return result+str[0];
//     }   
// int main()
// {
//     string s;
//     cin>>s;
//     cout<<reverseWords(s)<<endl;
//     return 0;
// }

// saala MC question bhaut time lee lihya check it once again chutiya questoin ha yaar ;;ohh hooo bhaut time gayaaa
#include<bits/stdc++.h>
using namespace std;

string reversestr(string str)
{
    reverse(str.begin(),str.end());
    str.insert(str.end(),' ');
    int n=str.size();
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]==' ')
        {
            reverse(str.begin()+j,str.begin()+i);
            j=i+1;
        }
    }
    str.pop_back();
    return str;
}
int main()
{
    string str;cin>>str;
    string rev=reversestr(str);
    cout<<rev;
    return 0;
}


