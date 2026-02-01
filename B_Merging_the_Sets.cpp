#include <iostream>
#include <vector>
#include <numeric>
#include <set>
#include <unordered_map>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<set<int>> sets(n);
    unordered_map<int, int> eleFreq;

    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        for(int j = 0; j < k; j++){
            int x;
            cin >> x;
            sets[i].insert(x);
            eleFreq[x]++;
        }
    }

    for (int i = 1; i <= m; ++i) {
        if (eleFreq[i] == 0) {
            cout << "NO" << endl;
            return;
        }
    }

    int redundant_count = 0;
    for (int i = 0; i < n; ++i) {
        bool is_redundant = true;
        for (int x : sets[i]) {
            if (eleFreq[x] == 1) {
                is_redundant = false;
                break;
            }
        }
        if (is_redundant) {
            redundant_count++;
        }
    }

    if(redundant_count >= 2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}