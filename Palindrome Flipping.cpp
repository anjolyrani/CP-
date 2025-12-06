#include <bits/stdc++.h>
using namespace std;

int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        string s, t; cin >> s >> t;

        if(s==t){
            cout << 0 << "\n";
        } else {
            cout << 1 << "\n";
            cout << 1 << " " << n << "\n";
        }
    }
}
