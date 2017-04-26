#include <bits/stdc++.h>

using namespace std;
int n, k, m;
bool f[1111][1111];
double dp[1111][1111];
int main()
{
    cin >> n >> m;
    cin >> k;
    for (int i = 0; i < k; ++i) {
        int  x,y;
        cin >> x >> y;
        f[x-1][y-1] = 1;
    }
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= m; ++j) 
            dp[i][j] = (n+m)*100;
    }
    dp[0][0] = 0;
    for (int i= 0; i <= n; ++i)
        for (int j = 0; j <= m; ++j) {
            if (f[i][j])
                dp[i+1][j+1] = min(dp[i][j] + 100.0*sqrt(2), dp[i+1][j+1]);
            dp[i+1][j] = min(dp[i][j] + 100.0, dp[i+1][j]);
            dp[i][j+1] = min(dp[i][j] + 100.0, dp[i][j+1]);
        }
    // for (int i = 1; i <= n; ++i) {
    //     for (int j = 1; j <=m; ++j)
    //         cout << dp[i][j] << ' ';
    //     cout << endl;
    // }
    cout << (int)round(dp[n][m]) << endl;
    return 0;
}
