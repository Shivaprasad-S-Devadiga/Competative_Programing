#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        // First output
        if (a < c) cout << 1 << " ";
        else cout << -1 << " ";

        // Second output
        if (a * b > c) cout << b;
        else cout << -1;

        cout << "\n";
    }

    return 0;
}
