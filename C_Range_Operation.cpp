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
    vector<long long> pre(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        pre[i] = pre[i - 1] + x;
    }

    long long sum = pre[n];
    int l = 1, r = n;

    while (l <= r) {
        long long score = pre[l] + pre[n] - pre[r - 1
        ] + (long long)(l + r) * (l - r + 1);
        sum = max(score, sum);

        if (pre[l] - pre[l - 1] > (long long)(l + r + 1) * (r - l - 1)) l++;
        else if (pre[r] - pre[r - 1] > (long long)(l + r - 1) * (r - l + 1)) r--;
        else break; // ← critical: prevents infinite loop
    }

    cout << sum << "\n";
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