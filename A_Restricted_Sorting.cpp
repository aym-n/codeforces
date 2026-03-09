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

    vector<int> a(n);
    for(auto &x: a) cin >> x;

    vector<int> b = a;
    sort(b.begin(), b.end());

    if(a == b){
        cout << -1 << endl;
        return;
    }

    int mn = b[0], mx = b[n - 1];
    int ans = INT_MAX;

    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            ans = min(ans, max(a[i] - mn, mx - a[i]));
        }
    }

    cout << ans << endl;
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