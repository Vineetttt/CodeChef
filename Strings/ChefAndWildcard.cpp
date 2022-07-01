#include <bits/stdc++.h>
using namespace std;
int main(){
	int t ; cin >>t;
	while(t--){
	 string s1,s2;
	 cin>>s1>>s2;
	 bool flag=true;
	 for(int i=0;i<s1.length();i++){
	 	if(s1[i] != s2[i] && s1[i] !='?' && s2[i] !='?') flag=false;
	 }
	 if(flag) cout<<"YES"<<endl;
	 else cout<<"NO"<<endl;
	}
	return 0;
}