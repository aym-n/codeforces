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
    int n, x;
    cin >> n >> x;
    vi arr(n);
    for(auto &a: arr) cin >> a;
    
    sort(all(arr));
    
    vi ans;
    long long sum = 0;
    long long bonus = 0;
    
    int i = 0, j = n - 1;
    
    while(i <= j) {
        long long prev_level = sum / x;
    
        while(i <= j && sum + arr[i] < (prev_level + 1) * x) {
            sum += arr[i];
            ans.push_back(arr[i]);
            i++;
        }
        
        if(i <= j) {
            long long new_level = (sum + arr[j]) / x;
            if(new_level > prev_level) {
                bonus += arr[j];
            }
            sum += arr[j];
            ans.push_back(arr[j]);
            j--;
        }
    }
    
    cout << bonus << endl;
    for(auto &a: ans) cout << a << " ";
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