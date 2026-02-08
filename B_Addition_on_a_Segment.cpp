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

void solve(){
    ll n;
    cin >> n;
    ll totalSum = 0, countNZ = 0;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        countNZ += (x > 0);
        totalSum += x;
    }

    cout << countNZ - max(0ll, n - 1 -  totalSum + countNZ) << '\n';
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