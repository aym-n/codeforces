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
    ll k;
    cin >> n >> k;

    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<>> pq;

    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;

        int pos = __builtin_ctzll(~x);
        ll cost = 1LL << pos;

        pq.push({cost, x});
    }

    while(!pq.empty()){
        auto [cost, x] = pq.top();

        if(cost > k) break;

        pq.pop();
        k -= cost;
        x += cost;

        int pos = __builtin_ctzll(~x);
        long long newCost = 1LL << pos;

        pq.push({newCost, x});
    }

    long long beauty = 0;

    while(!pq.empty()){
        beauty += __builtin_popcountll(pq.top().second);
        pq.pop();
    }

    cout << beauty << endl;
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