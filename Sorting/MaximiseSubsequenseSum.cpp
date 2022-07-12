#include <bits/stdc++.h>
using namespace std;

int main() {
   int t ; cin>>t;
   while(t--){
     int n,k; cin>>n>>k;
     vector <int> a(n);
     for(int i=0;i<n;i++) cin>>a[i];
     sort(a.begin(),a.end());
     for(int i=0;i<k;i++){
         if(a[i] < 0) a[i]*=-1;
     }
     long sum=0;
     for(int i=0;i<n;i++){
         if(a[i] > 0) sum+=a[i];
     }
     cout<<sum<<endl;
   }
    return 0;
}