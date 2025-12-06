#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (isPalindrome(s)) {
            cout << 0 << "\n\n";
            continue;
        }

        vector<int> p;
        for (int i = 0; i < n; i++)
            if (s[i] == '0') p.push_back(i + 1);

        cout << p.size() << "\n";
        for (int x : p) cout << x << " ";
        cout << "\n";
    }
}
