#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,k,l,c,d,p,nl,np;
    if(!(cin>>n>>k>>l>>c>>d>>p>>nl>>np)) return 0;

    long long drink_toasts = (k*l)/nl;
    long long lime_toasts  = c*d;
    long long salt_toasts  = p/np;

    cout << min(drink_toasts, min(lime_toasts, salt_toasts)) / n << "\n";
    
    return 0;
}