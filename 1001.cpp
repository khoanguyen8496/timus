#include <bits/stdc++.h>

using namespace std;
const double eps = 1e-4;
long long n;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout << setprecision(4) << fixed;
    // while (cin >> n) {
    //     long long l = 1;
    //     long long r = n;
    //     while (l + 1LL < r) {
    //         long long mid = (l+r) >> 1LL;
    //         cerr << l << ' ' << mid << ' ' << r << endl;
    //         if (mid <= n/(double)mid)
    //             l = mid;
    //         else r = mid;
    //     }
    //     double L = l, R = r;
    //     while (L + eps < r) {
    //         double M = (L + R)/2.0;
    //         cerr << L << ' ' << M << ' ' << R << endl;
    //         if (M*M +eps < (double)n) {
    //             L = M;
    //         } else {
    //             R = M;
    //         }
    //     }
    //     cout << L << endl;
    // }
    vector<double> res;
    while (cin >> n) {
        res.push_back(sqrt(n));
        // cerr << sqrt(n) << endl;
    }
    reverse(res.begin(), res.end());
    for (auto & x : res) {
        cout << x << endl;
    }
    return 0;
}
