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

ll Wn(ll start, ll k, set<ll>& black) {
    ll cur = start + 1;

    while (true) {
        auto it = black.lower_bound(cur);
        ll next_black = (it == black.end() ? LLONG_MAX : *it);
        ll white_count = next_black - cur;

        if (white_count >= k)
            return cur + k - 1;

        k -= white_count;
        cur = next_black + 1;
    }
}

void solve() {
    int n, m;
    cin >> n >> m;

    string s;
    cin >> s;

    set<ll> black;
    for (int i = 0; i < m; i++) {
        ll x;
        cin >> x;
        black.insert(x);
    }

    ll pos = 1;
    char prev = 'A';

    for (int i = 0; i < n; i++) {
        char curr = s[i];
        ll mark;

        if (prev == 'A' && curr == 'A')
            mark = pos + 1;
        else if (prev == 'A' && curr == 'B')
            mark = Wn(pos, 1, black);
        else if (prev == 'B' && curr == 'A')
            mark = Wn(pos, 1, black) + 1;
        else
            mark = Wn(pos, 2, black);

        black.insert(mark);
        pos = mark;
        prev = curr;
    }

    cout << sz(black) << endl;
    for (auto x : black)
        cout << x << " ";
    cout << endl;
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