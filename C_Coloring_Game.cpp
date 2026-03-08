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

    vi nums(n);
    for(auto &x: nums) cin >> x;

    ll ans = 0;
    for (int i = 0; i < n; ++i) {
      for (int j = n - 1; j > i; j--) {
        int b = max(nums[j], nums[n - 1] - nums[j]) - nums[i];
        int k = upper_bound(nums.begin() + i + 1, nums.begin() + j, b) - nums.begin();
        ans += j - k;
      }
    }

    cout << ans << endl;
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