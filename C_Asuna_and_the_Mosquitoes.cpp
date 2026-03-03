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

    ll oddNum = 0, sum = 0, maxEle = 0;
    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        sum += x;
        oddNum += (x & 1);
        maxEle = max(maxEle, x);
    }

    if(oddNum == 0 || oddNum == n){
        cout << maxEle << endl;
        return;
    }

    cout << sum - oddNum + 1 << endl;
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