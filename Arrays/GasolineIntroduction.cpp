#include <bits/stdc++.h>
using namespace std;
int main(){
	int t ; cin >>t;
	while(t--){
		int n ; cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int gasoline = a[0] , distance =0;
		for(int i=1;i<n;i++){
			if(gasoline == 0) break;
			gasoline = gasoline - 1 + a[i];
			distance += 1;
		}
		cout<<(gasoline + distance)<<endl;
	}
	return 0;
}