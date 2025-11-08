#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>> t;
    

    while (t--) {
        int r, c;
        cin>>r>>c;
        char mat[r][c];
        for(int i=0; i<r; i++){
          for(int j=0; j<c; j++){
            cin>>mat[i][j];
          }
        }

        int change=0;


        for(int i=0 ; i<c-1; i++){
          if(mat[r-1][i] !='R') change++;
        }
        for(int i=0 ; i<r-1; i++){
          if(mat[i][c-1] !='D') change++;
        }
 
        cout<<change<<"\n";

    }

    return 0;
}
