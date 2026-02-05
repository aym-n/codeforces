#include <bits/stdc++.h>
#include <math.h>
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

bool check(ll n){
    ll sum = n * (n + 1) / 2;
    ll s = round(sqrt(sum));
    return s * s == sum;
} 

void solve() {
    int n;
    cin >> n;

    if(check(n)){
        cout << -1 << endl;
        return;
    }

    vector<int> p(n);
    iota(all(p), 1); 

    for(int i = 0; i < n - 1; i++){
        if(check(i + 1)){ 
            swap(p[i], p[i+1]);
        }
    }

    for(int x : p) cout << x << " ";
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