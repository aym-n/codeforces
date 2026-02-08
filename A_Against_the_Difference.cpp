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

    map<int, deque<int>> q;
    vi dp(n + 1, 0);
    
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        
        q[x].push_back(i);
        if(q[x].size() > x) {
            q[x].pop_front();
        }
        
        if(q[x].size() == x){
            dp[i] = max(dp[i - 1], x + dp[q[x].front() - 1]);
        } else {
            dp[i] = dp[i - 1];
        }
    }

    cout << dp[n] << endl;
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