#include <bits/stdc++.h>
using namespace std;

int main() {
   int t ; cin>>t;
   while(t--){
    int x,y;
    cin>>x>>y;
    int chef,chefina;
    if(x%10 == 0) chef=x/10;
    else if(x%10 !=0) chef=(x/10)+1;
    
    if(y%10 == 0) chefina=y/10;
    else if(y%10 !=0) chefina=(y/10)+1;
    
    cout<<abs(chef-chefina)<<endl;
    
}
    return 0;
}