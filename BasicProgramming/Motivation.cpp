#include <bits/stdc++.h>
using namespace std;
int main(){
	int t ; cin >>t;
	while(t--){
		int n , x;
		cin>>n>>x;
		int s[n],r[n];
		int maximum=0;
		for(int i=0;i<n;i++) cin>>s[i]>>r[i];
		for (int i = 0; i < n; ++i)
		{
			if(s[i]<=x && maximum<r[i]) maximum=r[i];
		}
		cout<<maximum<<endl;

	}
	return 0;
}