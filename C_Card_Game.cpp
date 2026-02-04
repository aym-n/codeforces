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

    if (s[0] == 'A') {
        if (s.find('B', 1) == string::npos || s.find('B', 1) == n - 1) {
            cout << "Alice" << endl;
            return;
        }
    }

    if (s[n - 1] == 'A' && s[0] != 'B') {
        cout << "Alice" << endl;
        return;
    }

    if (s[n - 1] != 'B') {
        size_t lastA = s.rfind('A', n - 2);
        size_t lastB = s.rfind('B', n - 2);

        if (lastA != string::npos && (lastB == string::npos || lastA > lastB)) {
            if (lastA > 0) 
                cout << "Alice" << endl;
                return;
        }
    }

    cout << "Bob" << endl;
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