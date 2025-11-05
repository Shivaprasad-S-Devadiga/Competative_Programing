#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int k, n, w;   
    cin >> k >> n >> w;

    int nSum = (w * (w + 1)) / 2;
    int cost = k * nSum;

    if (cost > n)
        cout << cost - n;
    else
        cout << 0;

      return 0;
}
