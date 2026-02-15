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
    for (int i = 0; i < n; i++) cin >> a[i];

    int diff = a[1] - a[0];
    for (int i = 2; i < n; i++) {
        if (a[i] - a[i - 1] != diff) {
            cout << "NO" << endl;
            return;
        }
    }

    int num = a[0] - diff;
    int den = n + 1;

    if (num < 0 || num % den != 0) {
        cout << "NO" << endl;
        return;
    }

    int y = num / den;
    int x = diff + y;

    if (x < 0) {
        cout << "NO" << endl;
        return;
    }


    cout << "YES" << endl;
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