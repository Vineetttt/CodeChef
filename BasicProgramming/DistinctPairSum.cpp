#include <bits/stdc++.h>
using namespace std;
int main(){
	int t ; cin >>t;
	while(t--){
		int l,r;
		// l is the starting number in the range and r is the last numberin the range 
		cin>>l>>r;
		int ans = (2*r)-(2*l)+1;
		cout<<ans<<endl;
	}
	return 0;
}