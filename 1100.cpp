#include <bits/stdc++.h>

using namespace std;
typedef pair<int, pair<int,int> > PII;
const int N = 150001;
int n;
PII a[N];
bool cmp(const PII & a, const PII & b) {
    return (a.first > b.first || (a.first == b.first && a.second.first < b.second.first));
}
int main()
{
    scanf("%d", &n);
    for (int i = 0 ; i < n; ++i) {
        int id, sol;
        scanf("%d%d", &a[i].second.second, &a[i].first);
        a[i].second.first = i;
    }
    sort(a, a+n, cmp);
    for (int i = 0; i < n; ++i) {
        cout << a[i].second.second << ' ' << a[i].first << endl;
    }
    return 0;
}
