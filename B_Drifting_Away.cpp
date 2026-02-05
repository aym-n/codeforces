#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;

#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define endl "\n"

void solve() {
    string s;
    cin >> s;
    int n = s.size();

    set<string> invalid = {"*<", ">*", "><", "**"};
    
    for (int i = 0; i < n - 1; i++) {
        string p = {s[i], s[i + 1]};
        if (invalid.count(p)){
            cout << -1 << endl;
            return;
        }
    }

    int count_L = 0;
    int count_R = 0;
    for (char c : s) {
        count_L += c == '<';
        count_R += c == '>';
    }
    
    cout << n - min(count_L, count_R) << endl;
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}