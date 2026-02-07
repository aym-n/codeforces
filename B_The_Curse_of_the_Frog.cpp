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
    ll n, x;
    cin >> n >> x;

    ll maxDist = 0, bestCycle = 0;
    for(int i = 0; i < n; i++){
        ll a, b, c;
        cin >> a >> b >> c;

        maxDist += a * (b - 1);
        bestCycle = max(bestCycle, a * b - c);
    }

    if(maxDist >= x){
        cout << 0 << endl;
        return;
    }

    if(bestCycle <= 0){
        cout << -1 << endl;
        return;
    }

    x = x - maxDist;
    cout << (x + bestCycle - 1) / bestCycle << endl;

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