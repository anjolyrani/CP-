#include <bits/stdc++.h>
using namespace std;

int main() {
    int num1, num2;
    float result;
    char ch;

    cout << "Enter first number = ";
    cin >> num1;

    cout << "Enter second number = ";
    cin >> num2;

    cout << "Choose operator (+, -, *, /) = ";
    cin >> ch;

    switch (ch) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = (float)num1 / num2;
            break;
        default:
            cout << "Invalid operation\n";
            return 0;
    }

    cout << "Result: " << num1 << ch << num2 << " = " << result << endl;

    return 0;
}
