#include <bits/stdc++.h>
#include <algorithm>
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

    vi a(n);
    int countZ = 0;
    for(int i = 0; i < n; i++){
        char c;
        cin >> c;            
        a[i] = c - '0';
        countZ += (a[i] == 0);
    }

    vi ans;
    for(int i = 0; i < n; i++){
        if(i < countZ && a[i] == 1){
            ans.push_back(i + 1);
        }else if(i >= countZ && a[i] == 0){
            ans.push_back(i + 1);
        }
    }

    if(ans.empty()){
        cout << "Bob" << endl;
        return;
    }

    cout << "Alice" << endl;
    cout << sz(ans) << endl;
    for(auto x: ans) cout << x << " ";
    cout << endl;
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