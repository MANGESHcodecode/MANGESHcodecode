
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//programe to reverse a string using recursion
/*
void reverse(string s)
{
    if(s.length()==0)
    {
        return ;
    }
    string ros=s.substr(1);
    reverse(ros);
    cout<<s[0];
}
*/

//replace pi by 3.14
/*
void replace(string s)
{
    if(s.length()==0)
    {
        return ;
    }

    if(s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";
        replace(s.substr(2));
        
    }
    else
    {
        cout<<s[0];
        string ros=s.substr(1);
        replace(ros);
    }
}
*/

// TOWER OF HANOI CODEEEEEEEEEEEEEEEEEE
/*
void towerofhanoi(int n,char src,char dest,char help)
{
    if(n==0)
    {
        return ;
    }

    towerofhanoi(n-1,src,help,dest);
    cout<<" MOVE TO "<<src<<" TO "<<dest<<endl;
    towerofhanoi(n-1,help,dest,src);
} 
*/

//CODE TO REMOVE ALL DUPLICATES FROM STRING 
/*
string removedup(string s)
{
    if(s.length()==0)
    {
        return " ";
    }
    char ch=s[0];
    
    string ans=removedup(s.substr(1));
    if(ch==ans[0])
    {
        return (ans);
    }
    return (ch+ans);
}
*/

//CODE TO MOVE ALL 'X' AT THE END OF THE STRING
/*
string mov(string s)
{
    if(s.length()==0)
    {
        return " ";
    }
    char ch=s[0];
    string ans=mov(s.substr(1));
    

    if(ch=='x')
    {
        return (ans+ch);
    }
    return (ch+ans);
}
*/
int main()
{
    
    return 0;
}









