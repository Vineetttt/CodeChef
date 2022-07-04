#include <bits/stdc++.h>
using namespace std;
int main(){
	int t ; cin >>t;
	while(t--){
	  /*To replace the word 'party' by 'pawri' for any given string
	  	Using the in-built function regex-replace
	   	Parameters: It accepts three parameters which are described below:

		1)Subject string as the first parameter.
		2)The regex object as the second parameter.
		3)The string with the replacement text as the third parameter.*/

		string str; cin>>str;
		str = regex_replace(str,regex("party"),"pawri");
		cout<<str<<endl;
	}
	return 0;
}