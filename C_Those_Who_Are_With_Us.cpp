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
    int n, m;
    cin >> n >> m;
    
    vector<vi> a(n, vi(m));
    int mx = 0, cnt_mx = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j] > mx) {
                mx = a[i][j];
                cnt_mx = 1;
            } else if (a[i][j] == mx) {
                cnt_mx++;
            }
        }
    }
    
    vi r(n), c(m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == mx) {
                r[i]++;
                c[j]++;
            }
        }
    }
    
    int flag = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (r[i] + c[j] - (a[i][j] == mx) == cnt_mx) {
                flag = 1;
            }
        }
    }
    
    cout << mx - flag << endl;
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