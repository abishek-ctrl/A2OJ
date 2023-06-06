#include <bits/stdc++.h>
#include <vector>
using namespace std;
main(){
    int n,t;
    cin>>n>>t;
    vector<char> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    };
    for(int i=0;i<t;i++){
        for(int j=0;j<n;j++){
            if(arr[j]=='B' and arr[j+1]=='G'){
                swap(arr[j],arr[j+1]);
                j++;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
};