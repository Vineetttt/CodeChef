#include <bits/stdc++.h>
using namespace std;
int main(){
	int t ; cin >>t;
	while(t--){
		int n,a,b;
		cin>>n>>a>>b;
		int sarthak=0,anuradha=0;
		while(n--){
			string s; cin>>s;
			if(s[0]=='E' || s[0]=='Q' || s[0]=='U' ||s[0]=='I' ||s[0]=='N' ||s[0]=='O' ||s[0]=='X') 
				sarthak+=a;
			else anuradha+=b;
		}
		if(sarthak>anuradha) cout<<"SARTHAK"<<endl;
		else if(anuradha>sarthak) cout<<"ANURADHA"<<endl;
		else cout<<"DRAW"<<endl;
	}
	return 0;
}