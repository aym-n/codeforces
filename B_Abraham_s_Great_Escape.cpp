#include<iostream>
#include<vector>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

void solve(){
    int n, k;
    cin >> n;
    cin >> k;
    int blocked_cells = n * n - k;
    if(blocked_cells == 1){
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    vector<vector<char>> grid(n, vector<char>(n, 'U'));
    if(blocked_cells > 0){
        grid[n-2][0] = 'D';
        blocked_cells -= 2;
    }

    for(int row = n - 3; row >= 0 && blocked_cells > 0; row--){
        grid[row][0] = 'D';
        blocked_cells--;
    }

    for(int col = 1; col < n && blocked_cells > 0; col++){
        for(int row = n - 1; row >= 0 && blocked_cells > 0; row--){
            grid[row][col] = 'L';
            blocked_cells--;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << grid[i][j];
        }
        cout << endl;
    }
}

int main() {
    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}
