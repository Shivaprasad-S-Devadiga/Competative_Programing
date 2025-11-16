#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long ans = n; // final correct sequence press
    for (long long i = 1; i <= n - 1; ++i) {
        ans += (n - i) * i;
    }

    cout << ans << '\n';
    return 0;
}
