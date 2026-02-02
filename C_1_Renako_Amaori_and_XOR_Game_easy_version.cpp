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
    vector<int> A(n), B(n);
    int totalXor = 0;
    for(int i = 0; i < n; i++) cin >> A[i];
    for(int i = 0; i < n; i++) cin >> B[i];

    int finalTurn = 0;
    for(int i = 0; i < n; i++){
        totalXor ^= A[i] ^ B[i];
        if(A[i] != B[i]) {
            finalTurn = i % 2;
        }
    }

    if(!totalXor) {
        cout << "Tie" << endl;
        return;
    } 
    cout << (finalTurn ? "Mai" : "Ajisai") << endl;
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