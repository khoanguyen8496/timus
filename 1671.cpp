#include <bits/stdc++.h>

using namespace std;
typedef pair<int,int> PII;
const int N = 111111;
int n, m, q;
int R[N], cnt;
PII e[N];
int find_rank(int u) {
    if (R[u] == u) {
        return u;
    }
    else return (R[u] = find_rank(R[u]));
}
void union_rank(int u, int v) {
    u = find_rank(u);
    v = find_rank(v);
    if (R[u] == R[v]) return;
    if (R[u] < R[v])
        R[v] = R[u];
    else R[u] = R[v];
    cnt--;
}
int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i)
        R[i] = i;
    set<int> S;
    for (int i = 1; i <= m; ++i) {
        int u, v;
        scanf("%d%d", &u, &v);
        e[i] = make_pair(u, v);
        S.insert(i);
    }
    scanf("%d", &q);
    vector<int> Q(q, 0);
    for (int i = 0; i < q; ++i) {
        scanf("%d", &Q[i]);
        S.erase(Q[i]);
    }
    cnt = n;
    //init
    for (auto & x : S) {
        union_rank(e[x].first, e[x].second);
    }
    vector<int> res;

    res.push_back(cnt);
    for (int i = q-2; i >= 0; --i) {
        union_rank(e[Q[i]].first, e[Q[i]].second);
        res.push_back(cnt);
    }
    reverse(res.begin(), res.end());
    for (int i = 0; i < q; ++i)
        cout << res[i] << ' ';
    return 0;
}
