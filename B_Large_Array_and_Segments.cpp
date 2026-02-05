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
    ll n, k, x;
    cin >> n >> k >> x;

    vector<ll> a(n);
    vector<ll> pref(n + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        pref[i + 1] = pref[i] + a[i];
    }

    ll total_sum = pref[n];
    if (total_sum * k < x) {
        cout << 0 << endl;
        return;
    }

    ll loops = (x - 1) / total_sum;
    ll rem = x - (loops * total_sum);

    ll ans = 0; 
  
    for (int l = 1; l <= n; l++) {
        int low = 0, high = n; 
        int d = n; 
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int r = l + mid; 
            
            ll current_rem_sum;
            if (r <= n) {
                current_rem_sum = pref[r] - pref[l - 1];
            } else {
                current_rem_sum = (pref[n] - pref[l - 1]) + pref[r - n];
            }

            if (current_rem_sum >= rem) {
                d = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        ll width = (loops * n) + d + 1;
        ll total_len = n * k;

        if (width <= total_len) {
            ll max_start = total_len - width + 1;
            if (l <= max_start) {
                ans += (max_start - l) / n + 1;
            }
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