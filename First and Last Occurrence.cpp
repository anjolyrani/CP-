#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int x; 
    cin >> x;

    int first = lower_bound(a.begin(), a.end(), x) - a.begin();
    if(first == n || a[first] != x){
        cout << -1 << " " << -1;
        return 0;
    }

    int last = upper_bound(a.begin(), a.end(), x) - a.begin() - 1;
    cout << first << " " << last;
}
