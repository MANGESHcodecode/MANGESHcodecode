#include <iostream>
using namespace std;

int main()
{
    int n,m,target;
    cin>>n>>m>>target;

    int mat[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }

    bool found=false;
    int r=0,c=m-1;
    while(r<n && c>=0 )
    {
        if(target==mat[r][c])
        {
            found=true;
        }
        else if(target>mat[r][c])
        {
            r++;
        }
        else
        {
            c--;
        }
    }
    if(found)
    {
        cout<<"Element Found"<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
    return 0;
}








