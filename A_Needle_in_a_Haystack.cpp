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
    string n, h;
    cin >> n >> h;

    vi freq(26, 0);
    for(auto a: h) freq[a - 'a']++;
    for(auto a: n){
         freq[a - 'a']--;
         if(freq[a - 'a'] < 0){
            cout << "Impossible" << endl;
            return;
         }
    }


    char currMax = 'a' - 1;
    string ans;
    for(int i = 0; i < n.size(); i++){
        char currChar = n[i];
        for(char c = 'a'; c < currChar; c++){
            while(freq[c - 'a'] > 0){
                ans += c;
                freq[c - 'a']--;
            }
        }

        ans += currChar;
        currMax = max(currChar, currMax);
    }

    for(char c = currMax; c <= 'z'; c++){
        while(freq[c - 'a'] > 0){
            ans += c;
            freq[c - 'a']--;
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