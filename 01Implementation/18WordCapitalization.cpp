#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin>>s;

    if(islower(s[0])){
      int val = s[0] - 'a';
      s[0] = 'A' + val; // toupper() built in function
    }
    cout<<s;
    return 0;
}
