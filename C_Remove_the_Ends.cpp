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

void solve(){
    int n;
    cin >> n;

    vi a(n);
    for (int &x : a)
        cin >> x;

    vector<ll> pre(n), suf(n);
    if (a[0] > 0)
        pre[0] = a[0];

    if (a[n - 1] < 0)
        suf[n - 1] = - a[n - 1];

    for (int i = 1; i < n; i++){
        pre[i] = pre[i - 1];
        if (a[i] > 0)
            pre[i] += a[i];

        int j = n - i - 1;
        suf[j] = suf[j + 1];
        if (a[j] < 0)
            suf[j] += -a[j];
    }

    ll ans = 0;
    for (int i = 0; i < n; i++)
        ans = max(ans, pre[i] + suf[i]);
    
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