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

	vector<ll> a(n);

	for (auto &x : a) cin >> x;

    int p = min_element(a.begin(), a.end()) - a.begin();
	ll g = 0;

	for (int i = 0; i < n; ++i) {
		if (i != p && a[i] % a[p] == 0) {
			g = __gcd(g, a[i]);
		}
	}

	cout << (g == a[p] ? "Yes" : "No") << endl;

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