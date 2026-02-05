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
    int n, k;
    cin >> n >> k;

    vector<ll> left(n);
    vector<ll> right(n);

    for(int i = 0; i < n; i++) cin >> left[i];
    for(int i = 0; i < n; i++) cin >> right[i];

    ll minGloves = 1;
    vector<ll> remaining;

    for(int i = 0; i < n; i++){
        minGloves += max(left[i], right[i]);
        remaining.push_back(min(left[i], right[i]));
    }

    sort(remaining.rbegin(), remaining.rend());
    for(int i = 0; i < k - 1; i++){
        minGloves += remaining[i];
    }

    cout << minGloves << endl;
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