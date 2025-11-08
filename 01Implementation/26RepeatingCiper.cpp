#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    string s , ans="";
    cin >> s;

    int e=1 , i=0;

    while(i<n){
      ans +=s[i];
      i +=e;
      e++;
    }

    cout<<ans;
    return 0;
}
