#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        char ch;
        cin >> ch;
        ch = tolower(ch);
        if(ch == 'b') cout << "BattleShip\n";
        else if(ch == 'c') cout << "Cruiser\n";
        else if(ch == 'd') cout << "Destroyer\n";
        else if(ch == 'f') cout << "Frigate\n";
    }
}
