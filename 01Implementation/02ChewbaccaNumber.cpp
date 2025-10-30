#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;

    for (int i = 0; i <s.size(); i++) {
        int v = s[i] - '0';
        int inverted = 9 - v;

        // Don't invert if it makes number start with 0
        if (inverted < v && !(i == 0 && inverted == 0)) {
            s[i] = inverted + '0';
        }
    }

    cout <<s;
    return 0;
}
