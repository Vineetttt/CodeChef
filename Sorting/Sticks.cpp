#include <bits/stdc++.h>
using namespace std;
int main(){
	int t ; cin >>t;
	while(t--){
		int n ; cin>>n;
		vector <int> a(n);
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a.begin(),a.end());
		vector <int> empty;
		for (int i=0;i<a.size();i++){
			if(a[i+1] == a[i]){
				empty.push_back(a[i]);
				i++;
			}
		}
		if(empty.size() < 2) cout<<"-1"<<endl;
		else cout << empty[empty.size()-1]*empty[empty.size()-2] <<endl;
	}
	return 0;
}