#include <bits/stdc++.h>
using namespace std;
int main(){
	int t ; cin >>t;
	while(t--){
		float s , a,b,c;
		// s is stock price ;[a,b] is the price range ;c is % change
		cin>>s>>a>>b>>c;
		
		if(((c * s)/100 ) + s >= a && ((c * s)/100 ) + s <= b) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
	}
	return 0;
}