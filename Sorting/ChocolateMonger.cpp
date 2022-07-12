#include <bits/stdc++.h>
using namespace std;
int main(){
	int t ; cin >>t;
	while(t--){
		int n,x; cin>>n>>x;
		vector <int> a(n);
		for(int i=0;i<n;i++) cin>>a[i];
		int canEat = n-x;
		a.erase( unique( a.begin(), a.end() ), a.end() );
		int len =a.size();
		cout<<min(len,n-x)<<endl;
	}
	return 0;
}