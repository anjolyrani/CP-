#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x = n;
    while (x > 9) {
        int s = 0;
        while (x > 0) {
            s += x % 10;
            x /= 10;
        }
        x = s;
    }

    if (x == 1) cout << "Magic Number";
    else cout << "Not Magic Number";

    return 0;
}
