#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
    int n ; cin>>n;
    int temp = n;
    int min=1;
    for(int i=0;i<n;i++){
        if(i%2 == 0) cout<<temp--<<" ";
        else cout<<min++<<" ";
    }
    cout<<endl;
    }
	return 0;
}