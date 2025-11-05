#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin>>s;

    set<char>st;

    for(auto c : s){
      st.insert(c);
    }

    if(st.size()%2 == 0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!"; 

    return 0;
}
