#include <bits/stdc++.h>
using namespace std;

vector<int> cubes;
map<tuple<int,int,int,int>, bool> memo;

bool fit(int idx, int h, int w, int l) {
    if (idx < 0) return true;
    if (h < 0 || w < 0 || l < 0) return false;

    auto key = make_tuple(idx, h, w, l);
    if (memo.count(key)) return memo[key];

    int c = cubes[idx];

    if(w < c || l < c || h < c)
        return memo[key] = false;

    bool ok =
        fit(idx - 1, h - c, c, c) ||
        fit(idx - 1, c, w - c, c) ||
        fit(idx - 1, c, c, l - c);

    return memo[key] = ok;
}

void solve() {
    int n, m;
    cin >> n >> m;

    cubes.resize(n);
    cubes[0] = 1;
    if (n > 1) cubes[1] = 2;
    for (int i = 2; i < n; i++)
        cubes[i] = cubes[i - 1] + cubes[i - 2];

    string ans = "";

    for (int i = 0; i < m; i++) {
        int h, w, l;
        cin >> h >> w >> l;

        vector<int> dims = {h, w, l};
        bool possible = false;

        sort(dims.begin(), dims.end());
        do {
            memo.clear();
            if (fit(n - 1, dims[0], dims[1], dims[2])) {
                possible = true;
                break;
            }
        } while (next_permutation(dims.begin(), dims.end()));

        ans += (possible ? '1' : '0');
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
