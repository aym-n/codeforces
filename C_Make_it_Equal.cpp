
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second


using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;

    vector<long long> S(n), T(n);
    set<vector<long long>> c;

    for(int i = 0; i < n; i++) {
        cin >> S[i];
        S[i] = min(S[i] % k, k - (S[i] % k));
    }

    for(int i = 0; i < n; i++) {
        cin >> T[i];
        T[i] = min(T[i] % k, k - (T[i] % k));
    }

    sort(S.begin(), S.end());
    sort(T.begin(), T.end());
    c.insert(S);
    c.insert(T);

    if(c.size() == 1) {
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
