#include <bits/stdc++.h>
using namespace std;
int main(){
	int t ; cin >>t;
	while(t--){
	 	int n , s;
	 	cin>>n>>s;
	 	if(n<s) cout<<abs(s-2*n)<<endl;
	    else cout<<s<<endl;
	}
	return 0;
}