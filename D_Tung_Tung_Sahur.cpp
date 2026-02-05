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
    string p, s;
    cin >> p >> s;

    int n = p.size(), m = s.size();
    int i = 0, j = 0;

    while(i < n && j < m) {
        if(p[i] != s[j]) {
            cout << "NO" << endl;
            return;
        }

        char currentChar = p[i];

        int countP = 0;
        while(i < n && p[i] == currentChar) {
            countP++;
            i++;
        }

        int countS = 0;
        while(j < m && s[j] == currentChar) {
            countS++;
            j++;
        }

        if (countS < countP || countS > 2 * countP) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << (i == n && j == m ? "YES" : "NO") << endl;
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