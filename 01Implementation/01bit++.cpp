#include<bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int value=0, t;
  cin>>t;

  if(!(t)) return 0;

  string op;
  for(int i=0; i<t; i++){
    cin>>op;
    if(op.find('+')!=string::npos) value++;
    else value--;
  }
  cout<<value; 
  return 0;
}

// https://codeforces.com/problemset/problem/282/A