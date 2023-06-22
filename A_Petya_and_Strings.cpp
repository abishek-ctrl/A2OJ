#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    int i=0;
    while(i<a.size()){
        if(a[i]<97)
            a[i]+=32;
        if(b[i]<97)
            b[i]+=32;
        if(a[i]<b[i]){
            cout<<"-1";
            return 0;
        }
        else if(a[i]>b[i]){
            cout<<"1";
            return 0;
        }
        i++;
    }
    cout<<"0";
    return 0;

}