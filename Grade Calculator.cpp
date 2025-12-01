#include <bits/stdc++.h>
using namespace std;

int main() {
    int score;
    cin >> score;

    switch (score) {
        case 1:
            cout << "Grade: A\n";
            break;
        case 2:
            cout << "Grade: B\n";
            break;
        case 3:
            cout << "Grade: C\n";
            break;
        case 4:
            cout << "Grade: D\n";
            break;
        case 0:
            cout << "Grade: F\n";
            break;
        default:
            cout << "Invalid score\n";
    }

    return 0;
}
