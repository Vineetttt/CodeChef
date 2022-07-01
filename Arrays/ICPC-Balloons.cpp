#include <bits/stdc++.h>
using namespace std;
int main(){
	int t ; cin >>t;
	while(t--){
		int n ; cin>>n;
		int array[n],temp=0;
		for(int i=0;i<n;i++){
			cin>>array[i];
		}
		for(int i=0;i<n;i++){
			if(array[i]>=1 && array[i]<=7) temp+=1;
			if(temp==7){
				cout<<i+1<<endl;
				break;
			}
		}
	}
	return 0;
}