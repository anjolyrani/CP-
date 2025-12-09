#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007;

long long power(long long a, long long b){
    long long r = 1;
    while(b){
        if(b & 1) r = (r * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return r;
}

int main(){
    long long n;
    cin >> n;
    long long evenPos = (n + 1) / 2;
    long long oddPos = n / 2;
    long long ans = (power(5, evenPos) * power(4, oddPos)) % MOD;
    cout << ans;
}
