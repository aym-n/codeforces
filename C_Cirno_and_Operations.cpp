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

    vector<ll> a(n);
    ll ans = 0;
    for(auto &x: a){
        cin >> x;
        ans += x;
    } 

    int end = n;
    for(int i = 0; i < n - 1; i++){
        ll sum = abs(a[0] - a[end - 1]);
        ans = max(sum, ans);

        for(int j = 0; j < end - 1 ; j++){
            a[j] = a[j + 1] - a[j]; 
        }

        end = end - 1;
    }

    cout << ans << endl;
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