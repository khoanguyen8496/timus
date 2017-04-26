#include <bits/stdc++.h>

using namespace std;
int n;
vector<int> a;
int main()
{
    scanf("%d", &n);
    a.resize(n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a.begin(), a.end());
    if (n & 1) {
        printf("%.1lf\n", (double)a[(n-1)/2]);
    } else {
        printf("%.1lf\n", ((double)a[n/2]+(double)a[(n/2)-1])/2.0);
    }
    return 0;
}
