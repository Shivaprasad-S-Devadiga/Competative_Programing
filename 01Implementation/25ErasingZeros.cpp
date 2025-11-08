#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int first1=-1, last1=-1;

        for(int i=0; i<s.size(); i++) {
            if(s[i] == '1'){
                if(first1 == -1) first1 =last1 =i;
                else last1 = i;
            }
        }
        int eraseZeros  = 0;
        for(int i= first1; i<=last1; i++){
            if(s[i] =='0') eraseZeros++;
        }
        cout<<eraseZeros<<"\n";
    }

    return 0;
}
