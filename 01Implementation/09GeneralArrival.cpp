#include<bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin>>n;

  int smallNum, smallI=1, maxNum, maxI=1;
  cin>>smallNum;
  maxNum = smallNum;
  int temp;
  for(int i=2; i<=n; i++){
    cin>>temp;
    if(temp<=smallNum){
      smallNum= temp;
      smallI = i;
    }

    if(temp>maxNum){
      maxNum= temp;
      maxI = i;
    }

  }
  int swap = (maxI-1) + (n-smallI);
  
  cout<<(maxI-1) + (n-smallI) - (maxI>smallI ? 1:0);

  return 0;

}