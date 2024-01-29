#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main() {
	// your code goes here
	float t,n;
	cin>>t;
	
	while(t--)
	{
	    cin>>n;
	    float m=(0.143*n);
	    int x=pow(m,n);
	    
	    if(x-floor(x)<0.5)
	    {
	        cout<<floor(x)<<endl;
	    }
	    else
	    {
	        cout<<floor(x)+1<<endl;
	    }
	}
	return 0;
}