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

        string r = s;
        reverse(r.begin(), r.end());

        if (s == r) {
            cout << 0 << "\n\n";
            continue;
        }

        vector<int> v;
        for (int i = 0; i < n; i++)
            if (s[i] == '0') v.push_back(i + 1);

        cout << v.size() << "\n";
        for (int x : v) cout << x << " ";
        cout << "\n";
    }
}
