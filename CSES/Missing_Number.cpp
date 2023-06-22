#include <bits/stdc++.h>
#define ll long long
using namespace std;

main() {
    ll n;
    cin >> n;
    ll sum=0;
    for(ll i=0;i<n-1;i++) {
        ll temp;
        cin >> temp;
        sum+=temp;
    }
    cout<<(n*(n+1))/2-sum<<'\n';
}
