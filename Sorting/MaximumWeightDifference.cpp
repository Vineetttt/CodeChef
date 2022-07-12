#include <bits/stdc++.h>
using namespace std;
int main(){
	int t ; cin >>t;
	while(t--){
		// n is the number of items; items to be split in k parts 
		// array[n] consists of weight of each item 
		int n,k; cin>>n>>k;
		vector <int> w(n);
		for(int i=0;i<n;i++) cin>>w[i];

		sort(w.begin(),w.end());
		int sumKid=0,sumChef=0,ans;
		if(k<=n/2){
			for(int i=0;i<k;i++) sumKid+=w[i];
			for(int i=k;i<n;i++) sumChef+=w[i];
			ans=abs(sumKid-sumChef);
		}
		else{
			for(int i=0;i<n-k;i++) sumKid+=w[i];
			for(int i=n-k;i<n;i++) sumChef+=w[i];
			ans=abs(sumKid-sumChef);
		}
		cout<<ans<<endl;

	}
	return 0;
}	