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

    if(n == 1){
        cout << x << endl;
        return;
    }

    vi ans;
    ans.push_back(0);
    int total_or = 0;

    for(int i = 0; i < 30; i++){
        int bit = (x >> i) & 1;
        if(bit == 0) break;
        for(int j = pow(2, i); j < pow(2, i + 1) && ans.size() < n; j++){
            ans.push_back(j);
            total_or |= j;
        }
    }

    while(ans.size() < n) ans.push_back(0);
    if(total_or != x) ans[ans.size() - 1] = x;

    for(auto a: ans) cout << a << " ";
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