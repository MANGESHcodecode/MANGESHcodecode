#include<bits/stdc++.h>
using namespace std;

int setbit(int n,int pos)
{
    return(n| (1<<pos) );
}
void solve()
{
    int x;
    cin>>x;
    int arbi=1;
    int count=0;
    int brbi=0;


    while(2*arbi<=x)
    {
        arbi=arbi*2;
        count++;
    }
    for(int i=count-1;i>=0;i--)
    {
        if((1<<i) & x)
        {
            brbi=brbi | (1<<i);
        }
        
    }
    cout<<brbi<<" "<<arbi<<endl;
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    
    return 0;
}
