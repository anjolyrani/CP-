#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    map<int, int> freq;

    for (int i = 0; i < n; i++) 
    {
        int id;
        cin >> id;
        freq[id]++;
    }

    for (auto x : freq) 
    {
        cout << x.first << " -> " << x.second << " times" << endl;
    }

    return 0;
}
