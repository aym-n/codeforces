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

    while(n > 0 && (n & 1) == 0) n /= 2;

    string binaryString;
    while (n > 0) {
        binaryString += (n & 1) + '0';
        n >>= 1;
    }

    reverse(binaryString.begin(), binaryString.end());

    if (binaryString.size() % 2 == 1 && binaryString[binaryString.size() / 2] == '1') {
        cout << "NO" << endl;
        return;
    }

    int left = 0;
    int right = binaryString.length() - 1;

    while (left < right) {
        if (binaryString[left] != binaryString[right]) {
            cout << "NO" << endl;
            return;
        }
        left++;
        right--;
    }

    cout << "YES" << endl;
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