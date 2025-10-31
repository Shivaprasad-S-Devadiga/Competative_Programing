#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<string,  int>map;
    map["Tetrahedron"]=4;
    map["Cube"]=6;
    map["Octahedron"]=8;
    map["Dodecahedron"]=12;
    map["Icosahedron"]=20;

    int n;
    cin>>n;
    int total=0;
    string s;
    while(n--){
       cin>>s;
       total+=map.at(s);
    }
    cout<<total;
    return 0;
}