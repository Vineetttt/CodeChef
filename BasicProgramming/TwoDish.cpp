#include <bits/stdc++.h>
using namespace std;
int main(){
	int t ; cin >>t;
	while(t--){
		int n,a,b,c;
		cin>>n>>a>>b>>c;
		//n is no of guests , a fruits, b vegetables , c fishes
		if(b<n) cout<<"NO"<<endl;
		else if(b>=n){
			if(a+c>=n) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
	return 0;
}