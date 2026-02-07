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
    ll n;
    cin >> n;

    vi a(n), b(n), c(n);

    for(auto &x: a) cin >> x;
    for(auto &x: b) cin >> x;
    for(auto &x: c) cin >> x;

    vector<ll> count(2);
    for(int shift = 0; shift < n; shift++){
        bool x = true, y = true;
        for(int i = 0; i < n; i++){
            if(x == true && c[i] <= b[(i + shift) % n]) x = false;   
            if(y == true && b[i] <= a[(i + shift) % n]) y = false;              
        }

        count[0] += x;
        count[1] += y;
    }

    cout << n * count[0] * count[1] << endl;


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