#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        double salary;
        cin >> salary;
        double HRA, DA;
        if(salary < 1500) {
            HRA = 0.1 * salary;
            DA = 0.9 * salary;
        } else {
            HRA = 500;
            DA = 0.98 * salary;
        }
        double gross = salary + HRA + DA;
        cout << fixed << setprecision(2) << gross << "\n";
    }
}
