#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int arr[3];

    cin>>arr[0]>>arr[1]>>arr[2];

    sort(arr, arr+3);

    int shortDist = (arr[1]-arr[0]) + (arr[2]-arr[1]);

    cout<<shortDist;
    
    return 0;
}