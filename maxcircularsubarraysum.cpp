#include <iostream>
#include <climits>
using namespace std;


int kadane(int arr[],int n)
{
    int maxsum=INT_MIN;
    int currsum=0;
    
    for(int i=0;i<n;i++)
    {
        currsum+=arr[i];
        if(currsum<0)
        {
            currsum=0;
        }
        maxsum=max(maxsum,currsum);
    }
    return maxsum;
}
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int wrapsum;
    int nonwrapsum;

    nonwrapsum=kadane(arr,n);
    int totalsum=0;
    for(int i=0;i<n;i++)
    {
        totalsum+=arr[i];
        arr[i]=-arr[i];
    }

    wrapsum=totalsum+kadane(arr,n);
    cout<<max(wrapsum,nonwrapsum)<<endl;
    return 0;

}


