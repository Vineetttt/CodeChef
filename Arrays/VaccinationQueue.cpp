#include <bits/stdc++.h>
using namespace std;
int main(){
	int t ; cin >>t;
	while(t--){
		// x minutes to vaccinate a child ; y minutes to vaccinate an adult
		// binary array 1 denotes adult and 0 denotes child 
		// chef is standing at Pth position in the queue
		int n,p,x,y;
		cin>>n>>p>>x>>y;
		int array[n];
		int time =0;
		for(int i=0;i<n;i++){
			cin>>array[i];
		}
		for(int i=0;i<p;i++){
			if(array[i] == 0) time+=x;
			else if(array[i] ==1) time+=y;
		}
		cout<<time<<endl;
	}
	return 0;
}