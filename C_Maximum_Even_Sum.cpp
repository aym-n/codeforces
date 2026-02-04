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
    long long a, b;
    if (!(cin >> b >> a)) return;

    long long sol = -1;

    if (((a + b) & 1) == 0) {
        sol = a + b;
    }

    if (a % 2 == 1 && b % 2 == 1) {
        sol = max(sol, a * b + 1);
    } else if (a % 2 == 0 && (a % 4 == 0 || b % 2 == 0)) {
        sol = max(sol, 2 + (a * b) / 2);
    }

    cout << sol << "\n";
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