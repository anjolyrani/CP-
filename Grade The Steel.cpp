#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        double hardness, carbon, tensile;
        cin >> hardness >> carbon >> tensile;
        bool c1 = hardness > 50;
        bool c2 = carbon < 0.7;
        bool c3 = tensile > 5600;

        if(c1 && c2 && c3) cout << 10 << "\n";
        else if(c1 && c2) cout << 9 << "\n";
        else if(c2 && c3) cout << 8 << "\n";
        else if(c1 && c3) cout << 7 << "\n";
        else if(c1 || c2 || c3) cout << 6 << "\n";
        else cout << 5 << "\n";
    }
}
