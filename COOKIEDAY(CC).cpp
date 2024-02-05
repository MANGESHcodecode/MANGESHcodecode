#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int rem;
	    int mi=INT_MAX;
	    for(int i=0;i<n;i++)
	    {
	         rem=arr[i]%k;
	        mi=min(mi,rem);
	    }
	    int mx=INT_MIN;
	    bool check=0;
	    for(int i=0;i<n;i++)
	    {
	        mx=max(mx,arr[i]);
	        if(k>mx)
	        {
	            check=1;
	        }
	    }
	    if(check=1)
	    {
	        cout<<"-1"<<endl;
	    }
	    else
	    {
	        cout<<mi<<endl;
	    }
	}

}
