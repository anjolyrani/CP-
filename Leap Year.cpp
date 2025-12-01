#include <bits/stdc++.h>
using namespace std;

int main() {
    int year;
    
    cout << "Enter a year: ";
    cin >> year;

    if (year % 400 == 0) {
        cout << "This year is Leap year";
    }
    else if (year % 100 == 0) {
        cout << "The year is not Leap year";
    }
    else if (year % 4 == 0) {
        cout << "This year is Leap year";
    }
    else {
        cout << "This year is not Leap year";
    }

    return 0;
}

