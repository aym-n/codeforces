#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int l = 0;
    while (l < n - 1 && arr[l] <= arr[l + 1]) {
        l++;
    }

    if (l == n - 1) {
        cout << "yes\n1 1\n";
        return 0;
    }
    int r = n - 1;
    while (r > 0 && arr[r - 1] <= arr[r]) {
        r--;
    }

    for (int i = l; i < r; i++) {
        if (arr[i] < arr[i + 1]) {
            cout << "no\n";
            return 0;
        }
    }

    for (int i = 0; i < l - 1; i++) { 
         if (arr[i] > arr[i + 1]) {
            cout << "no\n";
            return 0;
        }
    }
    for (int i = r + 1; i < n - 1; i++) {
         if (arr[i] > arr[i + 1]) {
            cout << "no\n";
            return 0;
        }
    }
    if (l > 0 && arr[r] < arr[l - 1]) {
        cout << "no\n";
        return 0;
    }
    if (r < n - 1 && arr[l] > arr[r + 1]) {
        cout << "no\n";
        return 0;
    }

    cout << "yes\n";
    cout << l + 1 << " " << r + 1 << "\n";

    return 0;
}