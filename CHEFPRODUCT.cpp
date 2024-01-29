#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int long long n;cin>>n;
    int x=sqrtl(n);
    if((n-x*x)%2==1)
    {
        x--;
    }
    cout<<(x+1)/2<<endl;    
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    solve();
	}
	
    return 0;
}
