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
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    auto log2_ceil = [](int x) {
        int res = 0;
        while (x > 1) {
            ++res;
            x = (x + 1) / 2;
        }
        return res;
    };

    int top = a - 1;
    int bottom = n - a;
    int left = b - 1;
    int right = m - b;

    int n1 = min(top, bottom) + 1;
    int h = log2_ceil(n1) + log2_ceil(m);
    
    int m1 = min(left, right) + 1;
    int v = log2_ceil(n) + log2_ceil(m1);
    
    int ans = min(h, v);

    cout << 1 + ans << endl;
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