#include <bits/stdc++.h>
using namespace std;
int main(){
	int t ; cin >>t;
	while(t--){
		int n ; cin>>n;
		vector <int> a(n);
		for(int i=0;i<n;i++) cin>>a[i];
		int diff=0;
		sort(a.begin(),a.end());
		diff=a[1]-a[0];
		for(int i=1;i<n;i++){
			if((a[i]-a[i-1])<diff){
				diff=a[i]-a[i-1];
			}
		}
		cout<<diff<<endl;	}
	return 0;
}