#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool allCaps = true;

    // Check if all characters except maybe the first are uppercase
    for (int i = 1; i < s.size(); i++) {
        if (!isupper(s[i])) {
            allCaps = false;
            break;
        }
    }

    // Condition: either entire string is uppercase OR only the first char is lowercase
    if (allCaps) {
        for (char &c : s) {
            if (islower(c)) c = toupper(c);
            else c = tolower(c);
        }
    }

    cout << s << endl;
    return 0;
}
