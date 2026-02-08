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
    string s;
    cin >> n >> s;

    ll totalA = count(all(s), 'a');
    ll totalB = n - totalA;

    ll scoreA = 0, scoreB = 0;
    ll foundA = 0, foundB = 0;
    for(auto c: s){
        switch (c){
        case 'a':
            foundA += 1;
            scoreA += min(foundB, totalB - foundB);
            break;
        
        case 'b':
            foundB += 1;
            scoreB += min(foundA, totalA - foundA);
            break;
        }
    }

    cout << min(scoreA, scoreB) << endl;
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