#include <bits/stdc++.h>
using namespace std;
int main(){
	int t ; cin >>t;
	while(t--){
	int n,m;
	cin>>n>>m;
	vector <int> a(n);
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());
    int size=a.size();
    if(size < m) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
	return 0;
}