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
    vi sides(3);
    for(auto &x: sides) cin >> x;

    int cakes;
    cin >> cakes;

    vi ans;
    for(auto s: sides){
        int gcd = __gcd(cakes, s);
        cakes /= gcd;
        ans.push_back(gcd - 1);
    }
    
    if(cakes != 1){
        cout << -1;
        return;
    }

    for(auto x: ans) cout << x << " ";
}

int main() {
    fast_io;
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}