#include <iostream>
using namespace std;

int main(){
    int a, b, n;
    cin >> a >> b >> n;

    int r = (a * 10) % b;
    int add = (b - r) % b;

    if (add >= 10){
        cout << -1 << endl;
        return 0;
    }

    cout << a << add;
    for (int i = 0; i < n - 1; ++i){
        cout << 0;
    }
    cout << endl;

    return 0;
}