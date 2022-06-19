#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main(){
	int t ; cin >>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		int x = a+b ,y=b+c , z=a+c;
		if(x>=y && x>=z) cout<<x<<endl;
		else if(y>=x && y>=z) cout<<y<<endl;
		else cout<<z<<endl;
	}
	return 0;
}