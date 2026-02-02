#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
void solve(){
    int n, k;
    cin >> n >> k;

    int a[n + 1];

    for(int i = 1;i <= n;i++) 
        cin >> a[i];

    int current_height = a[k];
    int dist = a[k];

    sort(a + 1,a + n + 1);

    bool possible = true;
    for(int i = 1;i <= n;i++) {
      if(a[i] < current_height) continue;

      if(a[i] - current_height > dist) {
        possible = false;
      }
      current_height = a[i];
    }

    if(possible) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
 
    return 0;
}