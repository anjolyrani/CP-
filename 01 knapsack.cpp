#include <bits/stdc++.h>
using namespace std;

#define mx 1000
int dp[mx][mx]; 

int knapsack(int N, int K, int W[], int V[]) {
    if (N == 0 || K == 0)
        return 0;

    if (dp[N][K] != -1)
        return dp[N][K];

    if (W[N - 1] > K)
        return dp[N][K] = knapsack(N - 1, K, W, V);
    else
        return dp[N][K] = max(
            knapsack(N - 1, K, W, V),
            V[N - 1] + knapsack(N - 1, K - W[N - 1], W, V));
}

int main()
{
    int T;
    cin >> T;

    for (int caseNum = 1; caseNum <= T; ++caseNum) 
    {
        int N, K;
        cin >> N >> K;

        int W[MX], V[MX];
        for (int i = 0; i < N; i++) {
            cin >> W[i] >> V[i];
        }

        memset(dp, -1, sizeof(dp));

        int max_profit = knapsack(N, K, W, V);

        cout << "Case " << caseNum << ": " << max_profit << "\n";
    }

    return 0;
}
