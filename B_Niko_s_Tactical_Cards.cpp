#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(){
    int n;
    cin >> n;

    long long ranges[2] = {0, 0};
    long long A[n];
    long long B[n];

    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    for(int i = 0; i < n; i++){
        cin >> B[i];

        long long score_a = ranges[0] - A[i];
        long long score_b = B[i] - ranges[0];

        long long score_c = ranges[1] - A[i];
        long long score_d = B[i] - ranges[1];

        ranges[0] = min({score_a, score_b, score_c, score_d});
        ranges[1] = max({score_a, score_b, score_c, score_d});
    }

    cout << ranges[1] << endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}