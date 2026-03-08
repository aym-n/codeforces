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

const int MAXN = 1e7;

vector<int> primes;
vector<bool> is_prime;

void sieve() {
    is_prime.assign(MAXN + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * 1LL * i <= MAXN; i++) {
        if (is_prime[i]) {
            for (ll j = 1LL * i * i; j <= MAXN; j += i)
                is_prime[j] = false;
        }
    }

    for (int i = 2; i <= MAXN; i++)
        if (is_prime[i])
            primes.push_back(i);
}

void solve() {
    int n;
    cin >> n;

    ll ans = 0;

    for (int p : primes) {
        if (p > n)
            break;
        ans += n / p;
    }

    cout << ans << endl;
}

int main() {
    fast_io;
    sieve();
    
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}