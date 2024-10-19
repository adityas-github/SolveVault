#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    map<int,int>m;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        m[x]++;
        // cin>>a[i];
    }
    for(auto i:m){
        if(i.second == (n/2)){
            cout<<i.first<<endl;
            break;
        }
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}