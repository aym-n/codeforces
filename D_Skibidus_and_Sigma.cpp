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
    int n, m;
    cin >> n >> m;

    ll score = 0;
    vector<ll> arraySum(n); 
    
    for(int i = 0; i < n; i++){
        ll sum = 0, arrayScore = 0;
        for(int j = 0; j < m; j++){
            int x;
            cin >> x;
            sum += x;
            arrayScore += (ll)(m - j) * x;
        }

        score += arrayScore;
        arraySum[i] = sum;
    }

    sort(all(arraySum));
    
    for(int i = 0; i < n; i++){
        score += (ll)i * m * arraySum[i];
    }

    cout << score << endl;
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