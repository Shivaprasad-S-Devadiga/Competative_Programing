#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
  string oddP =string(m, '#') , leftP =string(m-1, '.') + '#', rightP = '#' + string(m-1, '.');

    for (int i = 1; i <= n; i++) {
        if (i % 2) {
            cout <<oddP << "\n";
        } else if (i % 4 == 0) {
            cout << rightP << "\n";
        } else {
            cout << leftP<< "\n";
        }
    }
     return 0;
}
