

#include<iostream>
#include<algorithm>
using namespace std;

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
    long long total_ops = 0;

    for (int i = 0; i < n; i++) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        if (b > d) {
            total_ops += (a + (b - d));
        } else {
            if (a > c) {
                total_ops += (a - c);
            }
        }
    }
    cout << total_ops << endl; 
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