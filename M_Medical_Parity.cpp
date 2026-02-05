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

vector<vector<int>> memo;

int calc(int i, int parity, string& x, string& y, int n) {
    if (i == n) {
        return 0;
    }

    if (memo[i][parity] != -1) {
        return memo[i][parity];
    }

    int flipCost = (x[i] == '1' ? 1 : 0);
    int parityCost = (y[i] - '0'  == parity ? 0 : 1);

    int a = flipCost + parityCost + calc(i + 1, parity, x, y, n);  
    int b = 1 - flipCost + 1 - parityCost + calc(i + 1, 1 - parity, x, y, n);
    return memo[i][parity] = min(a, b);
}

void solve() {
    string x, y;
    cin >> x >> y;

    memo.assign(x.size(), vector<int>(2, -1));
    cout << calc(0, 0, x, y, x.size()) << endl;
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