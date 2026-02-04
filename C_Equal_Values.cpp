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
    for(int i = 0; i < n; i++) cin >> a[i];

    ll cost = __LONG_LONG_MAX__;

    for(int start = 0; start < n; start++){
        int end = start;
        while(end < n && a[start] == a[end]) end++;

        int len = end - start;
        if(len == n){
            cout << 0 << endl;
            return;
        }
        
        cost = min(cost, (n - len) * a[start]);
        start = end - 1;
    }

    cout << cost << endl;
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