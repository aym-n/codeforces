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

    map<int,int> freq;
    unordered_map<int, int> count;
    unordered_map<int, int> last;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a[i] = x;
        freq[x]++;
    }
    
    int numCount = 0;
    for (auto it = freq.begin(); it != freq.end(); it++){
        auto [num, freq] = *it;
        if(freq < num || freq % num != 0){
            cout << -1 << endl;
            return;
        }
        numCount += freq / num;
    }

    if(numCount > n){
        cout << -1 << endl;
        return;
    }

    int curr = 1;
    for(auto f: a){
        if(count[f] % f == 0){ 
            last[f] = curr; 
            curr++;
        }
        cout << last[f] << " ";
        count[f]++;
    }

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