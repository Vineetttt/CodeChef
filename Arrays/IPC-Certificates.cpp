#include <bits/stdc++.h>
using namespace std;
int main(){
int n,m,k,c=0;
    cin>>n>>m>>k;
    while(n--)
    {
        int a[k+1],sum=0;
        for(int i=0;i<=k;i++) cin>>a[i];
        for(int i=0;i<k;i++) sum+=a[i];
        if(sum>=m){
            if(a[k]<=10)
            c++;
        }
    }
	cout<<c<<endl;
	return 0;
}