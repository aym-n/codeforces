#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int year;
    cin >> year;
    while (true) {
        year++;
        string y = to_string(year);
        set<char> digits(y.begin(), y.end());
        if (digits.size() == 4) {
            cout << year << "\n";
            break;
        }
    }

    return 0;
}