#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];

    sort(s.begin(), s.end());
    string a = s[0], b = s[n-1], ans = "";
    
    for(int i = 0; i < a.size() && i < b.size(); i++) {
        if(a[i] == b[i]) ans += a[i];
        else break;
    }

    cout << ans;
}
