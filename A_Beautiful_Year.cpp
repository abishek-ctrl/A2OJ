#include <bits/stdc++.h>
#include <vector>
using namespace std;
main(){
    int n;
    cin>>n;
    while(1){
        n++;
        int a=n/1000;
        int b=(n/100)%10;
        int c=(n/10)%10;
        int d=n%10;
        if(a!=b and a!=c and a!=d and b!=c and b!=d and c!=d){
            break;
        }
    }
    cout<<n<<endl;
}