#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin>>s;

    string Vowel ="aoyeui", result ="";
    

    for(char c: s){
      c = tolower(c);
      if(Vowel.find(c) == string ::npos){
        result += '.';
        result += c ;
      }
    }

    cout<<result;
    return 0;    
}
