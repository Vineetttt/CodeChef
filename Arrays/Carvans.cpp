#include <bits/stdc++.h>
#include <climits>
using namespace std;
int main(){
	int t ; cin >>t;
	while(t--){
		int n ; cin>>n;
		vector<int> a(n);
		for(int i =0;i<n;i++) cin>>a[i];
		int sum =0, temp=INT_MAX;
		for(int i=0;i<n;i++){
			if(a[i] <= temp ){
				sum+=1;
				temp=a[i];
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}