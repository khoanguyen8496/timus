#include <bits/stdc++.h>

using namespace std;
int s;
long long dp[11][82];
long long fun() {
    long long res = 0;
    for (int i = 1; i <= 9; ++i)
        dp[1][i] = 1;
    for (int i = 2; i <= 9; ++i) {
        for (int val = 1; val <= s; ++val) {
            for (int dig = 0; dig <= 9; ++dig) if (val - dig >= 1) {
                dp[i][val] += dp[i-1][val-dig];
            }
        }
    }
    for (int i = 1; i <= 9; ++i) {
        res += dp[i][s];
    }
    if (s == 1) res++;
    return res;
}
int main()
{
    scanf("%d", &s);
    printf("%lld\n", fun());
    return 0;
}
