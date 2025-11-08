#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    long long sum = 0;  // total cubes used
    long long i = 1;    // current level

    while (true) {
        long long need = i * (i + 1) / 2; // cubes needed for this level
        if (sum + need > n) break;
        sum += need;
        i++;
    }

    cout << (i - 1);
    return 0;
}
