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

vi build(int n) {
    if (n == 1) {
        return {1, 0};
    }

    vi prev = build(n - 1);
    int high = 1 << (n - 1);

    vi res;
    res.reserve(1 << n);

    // First block: set highest bit
    for (int x : prev) {
        res.pb(x | high);
    }

    // Second block: original
    for (int x : prev) {
        res.pb(x);
    }

    return res;
}

void solve() {
    int n;
    cin >> n;

    vi ans = build(n);
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;
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