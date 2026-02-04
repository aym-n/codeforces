#include <bits/stdc++.h>
#include<math.h>
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

    string s;
    cin >> s;

    vector<int> count(2, 0);
    int prev = 0, flips = 0;
    
    for(int i = 0; i < n; i++){
        int x = s[i] - '0';
        count[x] += 1;
        if(x != prev){
            flips += 1;
        }
        prev = x;
    }

    if(flips >= 3){
        cout << n + flips - 2 << endl;
        return;
    }

    if(flips == 2){
        cout << n + flips - 1 << endl;
        return;
    }

    cout << n + flips << endl;
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