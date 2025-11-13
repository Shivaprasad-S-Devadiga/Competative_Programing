#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    if (b % a != 0) {
        cout << -1;
        return 0;
    }

    long long x = b / a;
    int cnt = 0;

    // Count factors of 2
    while (x % 2 == 0) {
        x /= 2;
        cnt++;
    }

    // Count factors of 3
    while (x % 3 == 0) {
        x /= 3;
        cnt++;
    }

    // If leftover is not 1, then impossible
    if (x != 1)
        cout << -1;
    else
        cout << cnt;

    return 0;
}
