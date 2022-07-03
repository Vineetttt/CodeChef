#include <bits/stdc++.h>
using namespace std;
int main(){
	int t ; cin >>t;
	while(t--){
			string s ; cin>>s;
			int len=s.length();
			string sub1,sub2;
			sub1=s.substr(0,len/2);
			if(len%2 ==0) sub2=s.substr(len/2,len/2);
			else sub2=s.substr(len/2+1,len/2);
			sort(sub1.begin(), sub1.end());
			sort(sub2.begin(), sub2.end());
			if(sub1==sub2) cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}
	return 0;
}