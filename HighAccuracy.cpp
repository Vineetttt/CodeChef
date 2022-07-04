#include <bits/stdc++.h>
using namespace std;

int main() {
    int t ; cin>>t;
    while(t--){
     int marks; cin>>marks;
     if(marks %3 ==0) cout<<"0"<<endl;
     else if(marks %3 == 1) cout<<"2"<<endl;
     else cout<<"1"<<endl;
    }
    return 0;
}