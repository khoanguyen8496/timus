#include <bits/stdc++.h>

using namespace std;
const int MOD = 1e9+7;
const int N = 50001;
int n, a, b;
// long long dp[N][500][2];
long long dp[N][2];
long long fun() {
    long long res = 0;
    dp[0][0] = dp[0][1] = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < 2; ++j) {
            if (j & 1) {
                for (int ii = i - 1; ii >= max(0, i-a); --ii) {
                    dp[i][j] = (dp[i][j] + dp[ii][(j+1)&1]) % MOD;
                }
            } else {
                for (int ii = i - 1; ii >= max(0, i-b); --ii) {
                    dp[i][j] = (dp[i][j] + dp[ii][(j+1)&1]) % MOD;
                }
            }
        }
    }
    res = (dp[n][0] + dp[n][1]) % MOD;
    return res;
}
int main()
{
    scanf("%d%d%d", &n, &a, &b);
    // dp[0][0][0] = dp[0][0][1] = 1;
    // for (int i = 1; i <= n; ++i) {
    //     for (int j = 1; j <= a; ++j) {
    //         dp[i][j][0] = (dp[i][j][0] + dp[i-1][j-1][0]) % MOD;
    //         dp[i+1][1][1] = (dp[i+1][1][1] + dp[i][j][0]) % MOD;
    //     }
    //     for (int j = 1; j <= b; ++j) {
    //         dp[i][j][1] = (dp[i][j][1] + dp[i-1][j-1][1]) % MOD;
    //         dp[i+1][j][0] = (dp[i+1][1][0] + dp[i][j][1]) % MOD;
    //     }
    // }
    // long long res = 0;
    // for (int i = 1; i <= a; ++i) {
    //     res = (res + dp[n][i][0]) % MOD;
    // }
    // for (int i = 1; i <= b; ++i) {
    //     res = (res + dp[n][i][1]) % MOD;
    // }
    // cout << res << endl;
    cout << fun() << endl;
    return 0;
}
