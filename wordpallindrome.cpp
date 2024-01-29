#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            cout<<"NOT"<<endl;
        }
         else
        {
            cout<<"THE LETTER IS PALLINDROME"<<endl;
        }
        
    }
    return 0;
}


//wapis try kar and tujjhe aab tak woo charcater array samaj nhi aaya pay attention...










































































































