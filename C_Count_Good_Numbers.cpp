#include <bits/stdc++.h>
#include <math.h>
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

ll count_bad(ll n) {
    if (n == 0) return 0;

    ll singles = n/2 + n/3 + n/5 + n/7;
    ll pairs = n/6 + n/10 + n/14 + n/15 + n/21 + n/35;
    ll triples = n/30 + n/42 + n/70 + n/105;
    ll quad = n/210;

    return singles - pairs + triples - quad;
}

void solve() {
    ll l, r;
    cin >> l >> r;

    ll good_r = r - count_bad(r);
    ll good_l = (l - 1) - count_bad(l - 1);

    cout << good_r - good_l << endl;
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