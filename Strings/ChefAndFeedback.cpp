#include <bits/stdc++.h>
using namespace std;
int main(){
	int t ; cin >>t;
	while(t--){
		string s ; cin>>s;
		bool flag=false;
		for(int i=1;i<s.length()-1;i++){
			if(s[i] == '1'){
				if(s[i-1]=='0' && s[i+1]=='1') flag=true;
			}
			else{
				if(s[i-1]=='1' && s[i+1]=='1') flag=true;
			}
		}
		if(flag) cout<<"Good"<<endl;
		else cout<<"Bad"<<endl;
	}
	return 0;
}