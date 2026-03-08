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

void solve() {
    int n;
    cin >> n;

    vector<deque<int>> blogs;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        deque<int> blog;
        set<int> freq;

        for(int j = 0; j < x; j++){
            int t;
            cin >> t;

            if(freq.count(t)){
                blog.erase(find(blog.begin(), blog.end(), t));
            }

            blog.push_back(t);
            freq.insert(t);
        }

        reverse(blog.begin(), blog.end());
        blogs.push_back(blog);
    }

    vector<int> ans;
    set<int> used;

    while(!blogs.empty()){
        int best = -1;
        deque<int> bestFiltered;

        for(int i = 0; i < (int)blogs.size(); i++){
            deque<int> filtered;
            for(int x : blogs[i])
                if(!used.count(x)) filtered.push_back(x);

            if(filtered.empty()) continue;

            if(best == -1 || filtered < bestFiltered){
                best = i;
                bestFiltered = filtered;
            }
        }

        if(best == -1) break;

        for(int x : blogs[best]){
            if(!used.count(x)){
                ans.push_back(x);
                used.insert(x);
            }
        }

        blogs.erase(blogs.begin() + best);
    }

    for(int x : ans) cout << x << " ";
    cout << endl;
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}