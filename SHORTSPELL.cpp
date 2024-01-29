#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;cin>>n;
	    string str;cin>>str;
	    string ans;
	    bool check=false;
	    for(int i=0;i<n;i++)
        {
            if(str[i]>str[i+1])
            {
                str.erase(i,1);
                check=true;
                break;
            }
        }
	    if(check==false)
	    {
	        str.pop_back();
	        
	    }
	    cout<<str<<endl;
	}
return 0;
}
