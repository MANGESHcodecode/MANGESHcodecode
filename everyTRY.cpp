//find minimum steps to reach home from a to b; 
/*#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b,x;
    cin>>a>>b>>x;

    int k=abs(a-b);
    if (k!=0)
    {
        int y=k/x;
        if(k%x!=0)
        {
        
        }
    }

    return 0;
}*/
//find maximum numbers of k*k cutout squares from n*n;
/*#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    long int n,k;
    cin>>n>>k;

    int ans=0;

    ans=pow((n/k),2);
    cout<<ans<<endl;

    return 0;
}
//chef battery increases 2% and decreases by 3% to find minimum time to reach 50% exactly;
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int time=0;
    while(n!=50)
    {
        if(n>50)
        {
            n-=3;
        }
        else{
            n+=2;
        }
        time++;
    }
    cout<<time<<endl;
    return 0;
}
*/
//the rating dilema : normal and parellel universe , to find maximum possible product reating?
//sorry;
//bear and candy : limak 1 then bob 2 limak 3 then bob 4... limak max=a,bob max=b;
/*#include<iostream>
using namespace std;

int main()
{
    int a,b;
    int k=0,limak=0,bob=0;

    while(1)
    {
        if(k&1)
        {
            if(limak+k<=a)
            {
                limak+=a;
            }
        }
    }
    return 0;
}*/
//set precision wala dekh le ek baar;
//alice and bob problem solving famous questions;
//chef is trying to solve a problem having t testcases where for each test.......
/*#include<iostream>
using namespace std;

int main()
{
    int maxT,maxN,T,sumN;
    cin>>maxT>>maxN>>sumN;
    T=sumN/maxN;
    int r=sumN%maxN;
    
        if(maxT>T)
        {
            cout<<((T*maxN*maxN)+r*r)<<endl;
        }
        else{
            cout<<maxT*maxN*maxN<<endl;
        }
    
    return 0;
}*/
/*
//BIT MANUPULATION
#include<iostream>
using namespace std;

int getbit(int n,int pos)
{
    return(n & (1<<pos)!=0);
}
int main()
{
    cout<<getbit(5,2)<<endl;
    return 0;
}*/

//setting a bit
/*
#include<iostream>
using namespace std;

int setbit(int n,int pos)
{
    return(n | (1<<pos));
}
int main()
{
    cout<<setbit(5,1)<<endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;

int clearbit(int n,int pos)
{
    int mask=~(1<<pos);
    return(mask & n);
}
int main()
{
    cout<<clearbit(5,2)<<endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;

int updatebit(int n,int pos,int value)
{
    int mask=~(1<<pos);
    n=n & mask;
    return(n | (value<<pos));
}
int main()
{
    cout<<updatebit(5,1,1)<<endl;
    return 0;
}
*/
//therefore programme to find the the no. of one's in a binary representation
#include<iostream>
using namespace std;

int numberofones(int n)
{
    int count=0;
    while(n!=0)
    {
        n & (n-1);
        count++;
    }
    return count;
}
int main()
{
    cout<<numberofones(4)<<endl;
    return 0;
}










































































