#include <bits/stdc++.h>
using namespace std;

int main() {
   int t ; cin>>t;
   while(t--){
    int p,q;
    cin>>p>>q;
    if((p+q)%4 ==0 || (p+q-1)%4==0) cout<<"ALICE"<<endl;
    else cout<<"BOB"<<endl;
}
    return 0;
}