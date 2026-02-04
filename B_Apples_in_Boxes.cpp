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
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    int totalSum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        totalSum += a[i];

    }  

    auto prevMax = max_element(a.begin(), a.end());
    *prevMax = *prevMax - 1;
    auto [minVal , maxVal] = minmax_element(a.begin(), a.end());

    int diff = *maxVal - *minVal;
    if(diff > k){
        cout << "Jerry" << endl;
        return;
    }

    cout << (totalSum % 2 ? "Tom" : "Jerry") << endl; 

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