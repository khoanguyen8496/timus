#include <bits/stdc++.h>

using namespace std;
string s;
int n;
int main()
{
    cin >> s;
    n = s.size();
    stack<char> st;
    for (int i = 0; i < n; ++i) {
        if (!st.empty()) {
            if (s[i] == st.top()) {
                st.pop();
            } else {
                st.push(s[i]);
            }
        } else {
            st.push(s[i]);
        }
    }
    string res;
    while (!st.empty()) {
        res.push_back(st.top());
        st.pop();
    }
    reverse(res.begin(), res.end());
    cout << res << endl;
    return 0;
}
