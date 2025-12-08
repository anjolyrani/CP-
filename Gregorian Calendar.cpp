#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int year;
        cin >> year;
        int y = year;
        int m = 1, d = 1; // 1st January
        if(m < 3) {
            m += 12;
            y -= 1;
        }
        int K = y % 100;
        int J = y / 100;
        int f = d + (13*(m + 1))/5 + K + K/4 + J/4 + 5*J;
        int day = f % 7;
        string days[] = {"saturday","sunday","monday","tuesday","wednesday","thursday","friday"};
        cout << days[day] << "\n";
    }
}
