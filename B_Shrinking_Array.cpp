#include <iostream>
#include <vector>
#include <utility>
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
    vi a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < n - 1; i++) {
        if(abs(a[i] - a[i + 1]) <= 1) {
            cout << 0 << endl;
            return;
        }
    }

    for(int i = 0; i < n - 1; i++) {
        int mi = min(a[i], a[i+1]);
        int ma = max(a[i], a[i+1]);

        if(i > 0) {
            if (!(ma < a[i-1] - 1 || mi > a[i-1] + 1)) {
                cout << 1 << endl;
                return;
            }
        }

        if(i < n - 2) {
            if (!(ma < a[i+2] - 1 || mi > a[i+2] + 1)) {
                cout << 1 << endl;
                return;
            }
        }
    }
    
    cout << -1 << endl;
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