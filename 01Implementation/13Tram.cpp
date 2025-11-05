#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, exit, enter , capacity=0 , maxCap=0 ; 
    cin>>n;
    
    for(int i=0; i<n; i++){
      cin>>exit>>enter;
      capacity  += (-exit + enter);
      maxCap = max(maxCap , capacity);
    }
   
    cout<<maxCap;
    return 0;
}
