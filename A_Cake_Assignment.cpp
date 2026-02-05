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
    ll n;
    cin >> n;

    ll cakes = pow(2, n);

    ll cakeA;
    cin >> cakeA;
    ll cakeB = 2 * cakes - cakeA;
    vector<int> ans;
    while(cakeA != cakes && cakeB != cakes){
        if(cakeA > cakes){
            cakeA -= cakeB;
            cakeB = cakeB * 2;
            ans.push_back(2);
            continue;
        }

        cakeB -= cakeA;
        cakeA = cakeA * 2;
        ans.push_back(1);
    }

    cout<< ans.size() << endl;
    while(!ans.empty()) {
        cout << ans.back() <<" ";
        ans.pop_back();
    }

    cout<< endl;
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