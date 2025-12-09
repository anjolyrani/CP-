#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int x;
    cin >> x;

    auto it = lower_bound(a.begin(), a.end(), x);
    if(it != a.end() && *it == x) {
        cout << (it - a.begin());
    } else {
        cout << -1;
    }
    return 0;
}
