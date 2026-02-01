#include<algorithm>
#include <iostream>
#include <vector>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

void printarray(vector<int> countFreq){
    vector<int> order = {0, 2, 1};
    for(int i : order){
        for(int j = 0; j < countFreq[i]; j++){
            cout << i << " ";
        }
    }
    cout << endl;
}

void solve(){
    int n, target;
    cin >> n >> target;
    vector<int> countFreq(3, 0);

    int directPathScore = 0;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        countFreq[a]++;
        directPathScore += a;
    }

    if(target < directPathScore || target - directPathScore == 1){
        printarray(countFreq);
        return;
    }

    cout << -1 << endl;
    return;
}

int main() {
    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}
