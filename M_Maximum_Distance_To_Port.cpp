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
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> product(n + 1);
    for(int i = 1; i <= n; i++)
        cin >> product[i];

    vector<vector<int>> adj(n + 1);
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> dist(n + 1, -1);
    vector<int> maxDist(k + 1, -1);

    queue<int> q;

    int src = 1;
    dist[src] = 0;
    q.push(src);

    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        int prodType = product[curr];

        maxDist[prodType] = max(maxDist[prodType], dist[curr]);

        for (int nxt : adj[curr]) {
            if (dist[nxt] == -1) {
                dist[nxt] = dist[curr] + 1;
                q.push(nxt);
            }
        }
    }

    for(int i = 1; i <= k; i++)
        cout << maxDist[i] << " ";
    cout << endl;
}

int main() {
    fast_io;
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}