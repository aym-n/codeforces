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
    int n, x;
    cin >> n >> x;

    int b = __builtin_popcountll(x);

    if(b >= n){
        cout << x << endl;
        return;
    }

    if((n - b) % 2 == 0){
        cout << x + (n - b) << endl;
        return;
    }

    if (x > 1){
        cout << x + n - b + 1 << endl;
        return;
    }
    if (x == 1){
        cout << n + 3 << endl;
        return;
    } else {
        if (n == 1){
            cout << -1 << endl;
            return;
        } else cout << n + 3 << endl;
    }
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