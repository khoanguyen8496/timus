#include <bits/stdc++.h>

using namespace std;
typedef pair<pair<int, int>, int> PII;
int n;
int q;
vector<int> p;
vector<PII> Q;
map<int, set<int> > a;
bool cmp(const PII & a, const PII & b) {
    return a.first.first < b.first.first || (a.first.first == b.first.first &&
            a.first.second < b.first.second);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    p.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
        a[p[i]].insert(i+1);
    }
    cin >> q;
    string res = "";
    for (int i = 0; i < q; ++i) {
        int l, r, val;
        cin >> l >> r >> val;
        auto it = a.find(val);
        if (it == a.end()) res.push_back('0');
        else {
            auto iit = (it->second).lower_bound(l);
            if (iit == (it->second).end()) res.push_back('0');
            else {
                if (*iit > r) res.push_back('0');
                else res.push_back('1');
            }
        }
    }
    cout << res << endl;
}
