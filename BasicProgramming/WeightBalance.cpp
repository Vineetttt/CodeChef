#include <bits/stdc++.h>
using namespace std;
int main(){
	int t ; cin >>t;
	while(t--){
		int w1,w2,x1,x2,m;
		cin>>w1>>w2>>x1>>x2>>m;
		int minIncrease = w1+(x1*m);
		int maxIncrease = w1+(x2*m);

		if(minIncrease<=w2 && w2<=maxIncrease) cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
	return 0;
}