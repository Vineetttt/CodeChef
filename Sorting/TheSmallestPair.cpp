#include <bits/stdc++.h>
using namespace std;
int main(){
	int t ; cin >>t;
	while(t--){
		long n ; cin>>n;
		vector <int> a(n);
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a.begin(),a.end());
		long ans=a[0]+a[1];
		cout<<ans<<endl;
	}
	return 0;
}