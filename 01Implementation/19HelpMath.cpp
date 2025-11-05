#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin>>s;

    int start=0, mid=0, end = s.size()-1;
    
    while(mid <= end){
      if(s[mid]=='1'){
        swap(s[mid] , s[start]);
        start +=2;
        mid +=2;
      }
      else if(s[mid]=='2'){
        mid +=2;
      }
      else{
        swap(s[mid] , s[end]);
        end -= 2;
      }
    }
    cout<<s;
    return 0;
}
