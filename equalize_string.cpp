#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        char target = s[n-1];
        int ans = 0;
        for (char c : s)
            if (c != target) ans++;
        cout << ans << "\n";
    }
}
