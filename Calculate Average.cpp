#include <bits/stdc++.h>
using namespace std;

int main() {
    float numbers[5];
    float sum = 0, average;

    cout << "Enter 5 numbers:\n";

    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
        sum += numbers[i];
    }

    average = sum / 5;

    cout << "The average of the entered numbers is: " << average << endl;

    return 0;
}
