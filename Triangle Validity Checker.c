#include <bits/stdc++.h>
using namespace std;

int main() {
    int side1, side2, side3;

    cout << "Enter three sides of triangle:\n";
    cin >> side1 >> side2 >> side3;

    if ((side1 + side2 > side3) &&
        (side2 + side3 > side1) &&
        (side1 + side3 > side2)) 
    {
        cout << "Triangle is valid.";
    }
    else {
        cout << "Triangle is not valid.";
    }

    return 0;
}
