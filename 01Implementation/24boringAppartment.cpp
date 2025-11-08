#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
      int num;
      cin>>num;
      int prevBor = num%10;
      int prevPress = 10 * (prevBor-1);
      int currPress =0 , i=1;
      while(num>0){
        currPress +=i;
        i++;
        num /=10;
      }
      cout<<(prevPress +currPress)<<"\n";
    }
    
    return 0;
}
