#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;

    vector<long long> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    vector<int> a;
    long long prev_b = 0;

    int next_distinct_num = 1;

    for (int i = 0; i < n; i++) {
        long long current_b = b[i];
        
        long long diff = current_b - prev_b;
        
        long long last_pos = (i + 1) - diff;

        if (last_pos == 0) {
            a.push_back(next_distinct_num);
            next_distinct_num++;
        } else {
            a.push_back(a[last_pos - 1]);
        }

        prev_b = current_b;
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}