#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;

main(){
    ll n;
    cin>>n;
    if(n==1){
        cout<<1;
        }
    if(n==2 or n==3){
        cout<<"NO SOLUTION";
        }
    if(n>=4){
    for(ll i=1;i<=n;i+=2) cout<<i<<' ';
    for(ll i=2;i<=n;i+=2) cout<<i<<' ';
    }
}