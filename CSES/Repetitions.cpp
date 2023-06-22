#include <bits/stdc++.h>
#define ll long long
using namespace std;

main() {
    string s;
    cin>>s;
    int res=1,temp=1;
    int n=s.size();
    char m;
    for(int i=0;i<n;i++){
        if(temp==0){
            m=s[i];
            temp++;
        }else{
            if(s[i]==m){
                temp++;
            }else{
                temp=1;
                m=s[i];
            }
        }
        res=max(res,temp);
    }
    res = max(res, temp);
    cout<<res<<'\n';
}