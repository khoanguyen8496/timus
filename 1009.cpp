#include <bits/stdc++.h>

using namespace std;
int n, k;
long long dp[22][2];
int main()
{
    cin >> n >> k;
    dp[1][1] = k-1;
    //split into 2 cases the current digit is zero or not zero
    //if the current is zero then we have to choose the prev not zero
    //otherwise we can choose zero or not 
    //observation: all not zero digits holds the same value there fore we can put it all together
    for (int i = 2; i <= n; ++i) {
        dp[i][0] = dp[i-1][1];
        dp[i][1] = (dp[i-1][0] + dp[i-1][1]) * (k-1);
    }
    long long res  = 0;
    for (int i = 0; i < k; ++i)
        res = res + dp[n][i];
    cout << res << endl;
    return 0;
}
