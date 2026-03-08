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
    x--; 

    string s;
    cin >> s;

    if (x == 0 || x == n - 1) {
        cout << 1 << endl;
        return;
    }

    int distLeftEnd = x;
    int distRightEnd = n - 1 - x;

    bool leftWall = (s[x - 1] == '#');
    bool rightWall = (s[x + 1] == '#');

    if (leftWall || rightWall) {
        cout << min(distLeftEnd, distRightEnd) + 1 << endl;
        return;
    }

    int nearestLeftWall = -1;
    for (int i = x - 1; i >= 0; i--) {
        if (s[i] == '#') {
            nearestLeftWall = i;
            break;
        }
    }

    int nearestRightWall = -1;
    for (int i = x + 1; i < n; i++) {
        if (s[i] == '#') {
            nearestRightWall = i;
            break;
        }
    }

    if (nearestLeftWall == -1 && nearestRightWall == -1) {
        cout << 1 << endl;
        return;
    }

    int forceLeft = (nearestRightWall == -1) ? 0 : min(x, n - nearestRightWall);
    int forceRight = (nearestLeftWall == -1) ? 0 : min(nearestLeftWall + 1, n - 1 - x);

    cout << max(forceLeft, forceRight) + 1 << endl;

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