#include <bits/stdc++.h>
using namespace std;

int main(){
	int n , d; cin>>n>>d;
	vector <int> a(n);
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a.begin(),a.end());
	int ans=0;
	for(int i=0;i<n-1;){
	    if(a[i+1]-a[i] <= d){
	        ans+=1;
	        i=i+2;
	    }
	    else{
	        i++;
	    }
	}
	cout<<ans<<endl;
	return 0;
}