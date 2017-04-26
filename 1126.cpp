#include <bits/stdc++.h>

using namespace std;
int m,n;
multiset<int> a;
int val[25001];
int res[25001];
int main()
{
    scanf("%d", &m);
    while (1) {
        int x;
        scanf("%d",&x);
        val[n++] = x;
        if (x == -1) break;
    }
    for (int i = 0; i < m; ++i) {
        a.insert(val[i]);
    }
    res[0] = *a.rbegin();
    for (int i = m, j = 0; i < n; ++i, ++j) {
        a.erase(a.find(val[i-m]));
        a.insert(val[i]);
        res[i-m+1] = *a.rbegin();
    }
    for (int i=0; i<n-m;++i)
        cout << res[i] << endl;
    return 0;
}
