#include<bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin>>n;

    while(n--){
      cin>>t;
       if(t){
        cout<<"HARD";
        return 0; 
       }
    }

    cout<<"EASY";
    return 0;
}