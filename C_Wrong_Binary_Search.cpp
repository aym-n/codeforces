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

    string s;
    cin >> s;

    vi p(n);

    for (int i = 0; i < n; ) {
        if (s[i] == '1') {
            p[i] = i + 1;
            i++;
            continue;
        }

        int l = i;
        while (i < n && s[i] == '0')
            i++;
        int r = i - 1;

        int len = r - l + 1;

        if (len == 1){
            cout << "NO" << endl;
            return;
        }

        for (int j = l; j < r; j++)
            p[j] = j + 2;
        p[r] = l + 1;
    }

    cout << "YES" << endl;
    for (int i = 0; i < n; i++) {
        cout << p[i] << " ";
    }
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