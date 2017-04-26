#include <bits/stdc++.h>

using namespace std;
const int N = 46;
int n;
long long dp[N][2];
int main()
{
    cin >> n;
    dp[1][0] = dp[1][1] = dp[0][0] = dp[0][1] = 1;
    for (int i = 2; i < n; ++i) {
        dp[i][0] = dp[i-1][1] + dp[i-2][1];
        dp[i][1] = dp[i-1][0] + dp[i-2][0];
        // cerr << dp[i][0] << ' ' << dp[i][1] << endl;
    }
    cout << dp[n-1][0] + dp[n-1][1] << endl;
    return 0;
}
