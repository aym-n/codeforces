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

vector<int> fac = {1, 1, 2, 6, 24};
string getPermutation(string n, int idx){
    string available = n;
    string ans = "";

    for(int i = 0; i < n.size(); i++){
        int r = n.size() - i - 1;
        int choice = idx / fac[r];
        ans += available[choice];

        available.erase(available.begin() + choice);
        idx %= fac[r];
    }

    return ans;
}
void solve() {
    string n;
    int j, k;
    cin >> n >> j >> k;

    int len = n.size();

    int a = 0;
    string l = getPermutation(n, j - 1);
    string m = getPermutation(n, k - 1);

    for (int i = 0; i < len; i++)
        a += (l[i] == m[i]);

    cout << a << "A" << len - a << "B" << endl;
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