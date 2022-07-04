#include <bits/stdc++.h>
using namespace std;
int main(){
	int t ; cin >>t;
	while(t--){
		int n,m; cin>>n>>m;
		int x,y; cin>>x>>y;
		string s,empty="";
		while(n--){
			cin>>s;
			// f denotes completely solved ; p denotes partially solved and u is unattempted;
			int f=0,p=0;
			for(int i=0;i<m;i++){
				if(s[i]=='F') f+=1;
				if(s[i]=='P')p+=1;
			}
			if(f >= x || (f == x-1 && p >= y)) empty+='1';
			else empty+='0';
		}
		cout<<empty<<endl;
	}
	return 0;
}