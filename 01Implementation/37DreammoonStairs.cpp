#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // Minimum moves Dreamoon must make: ceil(n/2)
    int minMoves = (n + 1) / 2;

    // Find smallest x >= minMoves that is divisible by m
    int ans = ((minMoves + m - 1) / m) * m;

    if (ans > n) cout << -1;
    else cout << ans;

    return 0;
}
