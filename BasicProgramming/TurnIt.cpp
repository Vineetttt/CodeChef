#include <bits/stdc++.h>
using namespace std;
int main(){
	int t ; cin >>t;
	while(t--){
		int u,v,a,s;
		cin>>u>>v>>a>>s;
		int speed = u*u -2*a*s;
		if(speed <= v*v) cout<<"YES"<<endl;
		else cout<<"NO"<<endl; 
	}
	return 0;
}