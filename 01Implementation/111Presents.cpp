#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n , t ; 
    cin>>n;

    vector<int>m(n+1);

    for(int i=1; i<=n; i++){
       cin>>t;
       m[t] = i; 
    }

    for(int i=1; i<=n ; i++){
      cout<<m[i]<<" ";
    }

    return 0;
}
