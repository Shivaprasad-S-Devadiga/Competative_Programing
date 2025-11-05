#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int  n , t;
    cin>>n;

    int count=1, maxCount =1;
    int prev;
    cin>>prev;

    for(int i=2; i<=n; i++){
      cin>>t;
      if(t>prev) count++;
      else count = 1;

      maxCount = max(count , maxCount);
      prev =t;

    }

    cout<<maxCount;
    return 0;
}
