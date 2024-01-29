 #include <bits/stdc++.h>
using namespace std;

// bool isprime(int n){
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0){
//             return false;
//         }
//         return true;
//     }
    
// }



// int maxi=*max_element(a.begin(),a.end());

//   MAPPING OF INT AND VECTOR 
//   map<int,vector<int>>freq;
      
//       for(int i=0;i<n;i++){
//           freq[a[i]].push_back(b[i]);
//       }
//       int ans=0;
//       for(auto x:freq){
//           vector<int>v;
//           v=x.second;
//           sort(v.begin(),v.end());
//           if(v[v.size()-1]>0)
//           ans+=v[v.size()-1];
//       }
//                              power of 2
// int mod=1e9+7;
//     int power(int a,int n,int mod)
//     {
//         long long res=1;
//         while(n>0)
//         {
//             if(n%2!=0)
//                 res=((long long)res*a)%mod;
//             n=n>>1;
//             a=((long long)a*a)%mod;
//         }
//         return res;
//     }
//   Finding range of element of v1 vector in v2 vector in log(n)
//  vector<int>ans;
//         for(auto x:v1){
//             int lowerrange=max(0,x-k);
//             int upperrange=min(n-1,x+k);

//             auto it=lower_bound(v2.begin(),v2.end(),lowerrange);
//             if(it!=v2.end() && *it<=upperrange){
//                 ans.push_back(x);
//             }
//         }
//         return ans;

void solveCase() {
    
    int h,x,y1,y2,k;
    cin >>h>>x>>y1>>y2>>k;
    
    if(x>=h || y1>=h){
            cout<<1<<endl;
            return;
    }
   
  if(x>=y1){
          if(h%x==0){
                  cout<<h/x<<endl;
          }
          else{
                 cout<<(h/x)+1<<endl; 
          }
          return;
  }
  else{
          long long powermove=y1*k;
          if(powermove>=h){
                   if(h%y1==0){
                  cout<<h/y1<<endl;
                }
          else{
                 cout<<(h/y1)+1<<endl; 
                }
          return;
          }
          
          else{
                  long long diff=h-powermove;
                  long long ans=(diff/y2)+k;
                  if((diff%y2)!=0){
                          ans=ans+1;
                  }
                  
                  long long ans2=h/x;
                   if((h%x)!=0){
                          ans2=ans2+1;
                  }
          
          cout<<min(ans,ans2)<<endl;
          return;
          }
  }
}

int main() {

    int t;
    cin >> t;

    while(t--){
        solveCase();
    }

    return 0;
}