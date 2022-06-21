#include <bits/stdc++.h>
using namespace std;
int main(){
	int t ; cin >>t;
	while(t--){
		int n ; cin>>n;
		vector<int> a(n);
		for(int i =0;i<n;i++) cin>>a[i];
		int boast =0;
		for(int i=0;i<n;i++){
		    int min=0,max=0;
			for(int j=0;j<n;j++){
				if(a[i] < a[j]) max++;
			}
			min = n-max;
			if(max<min) boast++;
		}
		cout<<boast<<endl;
	}
	return 0;
}