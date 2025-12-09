#include <bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int countWays(int coins[], int n, int amount) {
    if (amount == 0) return 1;
    if (amount < 0 || n == 0) return 0;
    if (dp[n][amount] != -1) return dp[n][amount];
    return dp[n][amount] = countWays(coins, n, amount - coins[n - 1]) + countWays(coins, n - 1, amount);
}

int main() {
    int n;
    cin >> n;
    int coins[n];
    for (int i = 0; i < n; i++) cin >> coins[i];
    int amount;
    cin >> amount;
    memset(dp, -1, sizeof(dp));
    cout << countWays(coins, n, amount) << endl;
}
