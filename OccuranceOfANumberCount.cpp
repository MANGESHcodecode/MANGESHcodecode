#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define for(n) for(int i=0;i<n;i++)

int firstindex(int arr[],int n,int key)
{
	int s=0;
	int e=n;
	int result1=-1;
	while(s<=e)
	{
		int mid=(e+s)/2;
		
		if(arr[mid]==key)
		{
			e=mid-1;
			result1=mid;
			
		}
		else if(arr[mid]>key)
		{
			e=mid-1;
		}
		else
		{
			s=mid+1;
		}
		
	}
	return result1;
}
int lastindex(int arr[],int n,int key)
{
	int s=0;
	int e=n;
	int result2=-1;
	while(s<=e)
	{
		int mid=(e+s)/2;
		
		if(arr[mid]==key)
		{
			s=mid+1;
			result2=mid;
			
		}
		else if(arr[mid]>key)
		{
			e=mid-1;
		}
		else
		{
			s=mid+1;
		}
		
	}
	return result2;
}
int main()
{
	int n;cin>>n;
	int arr[n];
	for(n)
	{
		cin>>arr[i];
	}
	
	int key;
	cin>>key;
	int ans=lastindex(arr,n,key)-firstindex(arr,n,key);
	cout<<ans+1<<endl;
	return 0;
}


