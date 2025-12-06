#include <bits/stdc++.h>
using namespace std;

bool isLucky(int n){
    return (n%7==0 || n%10==7);
}

int main(){
    int n;
    cin >> n;
    if(isLucky(n)) 
      cout << n << " is a lucky number\n";
    else 
      cout << n << " is not a lucky number\n";
}
