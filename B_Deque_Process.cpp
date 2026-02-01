#include <iostream>
#include <vector>
#include <string>
#include <deque>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    deque<int> dq;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        dq.push_back(val);
    }

    string result = "";
    for (int i = 0; dq.size() >= 2; ++i) {
        bool inc = (i % 2 == 0);
        if (inc == (dq.front() < dq.back())) {
            result += "LR";
        } else {
            result += "RL";
        }
        dq.pop_back();
        dq.pop_front();
    }

    if (!dq.empty()) {
        result += "L";
    }

    cout << result << "\n";
}

int main() {
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}