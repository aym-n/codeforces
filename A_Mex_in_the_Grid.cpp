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

    vector<vector<int>> grid(n, vector<int>(n, -1));

    int x = n % 2 ? n / 2 : n / 2 - 1;
    int y = x;

    grid[x][y] = 0;

    int curr = 1;
    int step = 1;

    vector<int> dx = {0, 1, 0, -1};
    vector<int> dy = {1, 0, -1, 0};

    while(curr < n * n){
        for(int d = 0; d < 4; d++){

            int steps = step;
            step += d % 2;

            for(int i = 0; i < steps; i++){
                x += dx[d];
                y += dy[d];

                if(x >= 0 && x < n && y >= 0 && y < n && grid[x][y] == -1){
                    grid[x][y] = curr++;
                }

                if(curr >= n * n) break;
            }

            if(curr >= n * n) break;
        }
    }

    for(auto &row : grid){
        for(auto v : row) cout << v << " ";
        cout << endl;
    }
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