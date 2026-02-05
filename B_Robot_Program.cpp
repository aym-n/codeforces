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
    ll n, x, k;
    cin >> n >> x >> k;

    ll tX = -1, tZ = -1, pos = 0;

    string s;
    cin >> s;

    for(int i = 0; i < n; i++){
        char c = s[i];
        pos += (c == 'R');
        pos -= (c == 'L');

        if(pos == -x && tX == -1) tX = i + 1;

        if(pos == 0 && tZ == -1) tZ = i + 1;

        if(tX != -1 && tZ != -1) break;
    }

    if(tX == -1){
        cout << 0 << endl;
        return;
    }

    if(tZ == -1){
        cout << 1 << endl;
        return;
    }

    ll count = 1 + (k - tX) / tZ;
    cout << count << endl; 
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