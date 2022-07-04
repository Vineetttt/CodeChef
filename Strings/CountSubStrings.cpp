#include <bits/stdc++.h>
using namespace std;
int main(){
	int t ; cin >>t;
	while(t--){
        int n; cin>>n;
		string s ; cin>>s;
        int count=0;
		for(int i=0;i<n;i++){
            if(s[i]=='1') count+=1;
        }
        int ans = count*(count+1)/2;
        cout<<ans<<endl;
	}
	return 0;
}