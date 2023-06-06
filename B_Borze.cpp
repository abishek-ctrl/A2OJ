#include <bits/stdc++.h>
#include <vector>
using namespace std;
main(){
    string s,ans="";
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='.'){
            ans+='0';
        }
        else if(s[i]=='-' and s[i+1]=='.'){
            ans+='1';
            i++;
        }
        else if(s[i]=='-' and s[i+1]=='-'){
            ans+='2';
            i++;
        }
        }
    cout<<ans<<endl;
}