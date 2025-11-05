#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n ; 
    cin>>n;
    
    int digit , count=0;
    while(n>0){
      digit = n%10;
      if( digit == 4 || digit == 7){
        count++;
      }
      n /= 10;
    }

    if(count==4 || count==7) cout<<"YES";
    else cout<<"NO";

    return 0;
}
