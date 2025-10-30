#include<bits/stdc++.h>
using namespace std;

void printROundNUm(string s){
  if(s.size()==1){
    cout<<s<<"\n";
    return ;
  }
  int mul =1;
  for(int i=s.size()-1; i>=0; i--){
    if(s[i]!= '0'){
      cout<<(s[i]-'0')*mul<<" ";
    }
    mul*=10;
  }
  cout<<"\n";
  return ;
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;

  while(t--){

    int n;
    cin>>n;

    string s = to_string(n);
    int cnt=0;
    for(int i=0; i<s.size(); i++){
      if(s[i]!='0') cnt++;
    }
    cout<<cnt<<"\n";

    printROundNUm(s );
  }
}