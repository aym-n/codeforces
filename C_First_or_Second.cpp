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
    int n;
    cin >> n;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    vector<ll> prefixSum(n + 1, 0);
    for (int i = 2; i <= n; i++) {
        prefixSum[i] = prefixSum[i - 1] + abs(a[i]);
    }

    vector<ll> suffixSum(n + 2, 0);
    for (int i = n; i >= 1; i--) {
        suffixSum[i] = suffixSum[i + 1] - a[i];
    }

    ll m = -4e18;

    for (int k = 1; k <= n; k++) {
        ll x = 0;
        if (k == 1) {
            x = suffixSum[2];
        } else {
            x = a[1] + prefixSum[k - 1] + suffixSum[k + 1];
        }
        m = max(m, x);
    }

    cout << m << endl;
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