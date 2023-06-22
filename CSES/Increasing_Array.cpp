#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;

main() {
    ll n;
    cin>>n;
    ll a[n];
    ll ans=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=1;i<n;i++){
        if(a[i]<a[i-1]){
            ans+=a[i-1]-a[i];
            a[i]=a[i-1];
        }
    }
    cout<<ans<<'\n';
}