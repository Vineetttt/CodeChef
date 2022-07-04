#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>s;
    cin >> n;
    while (n--)
    {
        string word;
        cin>>word;
        for(int i=word.size();i>=0;i--){
            for(int j=0;j<s.size();j++){
                if(word[i] == s[j]){
                    word.pop_back();
                }
            }        
        }
        if(word.length()==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        
    }
    return 0;
}