#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    string s;
    cin >> k >> s;

    if (k == 1) {  // special case: no need to modify
        cout << s;
        return 0;
    }

    map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    string unit = "";
    for (auto &p : freq) {
        if (p.second % k != 0) {
            cout << -1;
            return 0;
        }
        unit.append(p.second / k, p.first);
    }

    string result = "";
    for (int i = 0; i < k; i++) {
        result += unit;
    }

    cout << result;
    return 0;
}
