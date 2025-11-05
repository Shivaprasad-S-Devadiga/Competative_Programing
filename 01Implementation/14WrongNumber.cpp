#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, t , digit;
    cin>>n>>t;
    while(t--){
      digit = n%10;
      if(digit == 0) n /= 10;
      else n -= 1;
    }

    cout<<n;

    return 0;
}
