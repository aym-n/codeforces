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
    int m = 1e9 + 7;
    bool ans = true;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        if(m < x / 2 + 1){
            ans = false;
        }

        m = min(m, x);
    }

    cout << (ans ? "YES" : "NO") << endl;
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