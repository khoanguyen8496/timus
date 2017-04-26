#include <bits/stdc++.h>

using namespace std;
int n, k, m;
bool f[1111][1111];
pair<int,int> getPoint() {
    int x, y;
    do {
        x = 1 + (rand() % n);
        y = 1 + (rand() % m);
    } while (f[x][y]);
    return make_pair(x,y);
}
int main()
{
    freopen("in","w", stdout);
    srand(time(NULL));
    n = 1+ (rand() % 1000);
    m = 1+ (rand() % 1000);
    k = 1+ (rand() % 100);
    cout << n << ' ' << m << endl;
    cout << k << endl;
    for (int i = 0; i < k; ++i) {
        pair<int,int> point = getPoint();
        cout << point.first << ' '  << point.second << endl;
    }
    return 0;
}
