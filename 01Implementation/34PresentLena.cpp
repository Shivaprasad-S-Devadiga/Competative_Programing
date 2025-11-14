#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // upper part including middle row
    for (int i = 0; i <= n; i++) {
        // leading spaces
        for (int s = 0; s < (n - i); s++)
            cout << "  ";

        // left side 0 to i
        for (int j = 0; j <= i; j++) {
            cout << j;
            if (j < i) cout << " ";
        }

        // right side i-1 to 0
        for (int j = i - 1; j >= 0; j--) {
            cout << " " << j;
        }

        cout << "\n";
    }

    // lower part
    for (int i = n - 1; i >= 0; i--) {
        // leading spaces
        for (int s = 0; s < (n - i); s++)
            cout << "  ";

        // left side 0 to i
        for (int j = 0; j <= i; j++) {
            cout << j;
            if (j < i) cout << " ";
        }

        // right side i-1 to 0
        for (int j = i - 1; j >= 0; j--) {
            cout << " " << j;
        }

        cout << "\n";
    }

    return 0;
}
