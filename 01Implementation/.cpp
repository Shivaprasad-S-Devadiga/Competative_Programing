#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;

    // a[i] is the jump from cell i to i + a[i]
    vector<int> a(n + 1);
    for (int i = 1; i <= n - 1; ++i) {
        cin >> a[i];
    }

    int pos = 1;
    while (pos < t) {
        pos += a[pos];   // jump according to the portal
    }

    if (pos == t)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
