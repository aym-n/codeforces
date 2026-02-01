#include<iostream>
#include<queue>
using namespace std;    

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    priority_queue<int, vector<int>, greater<int>> minHeap; 
    priority_queue<int> maxHeap;

    for (int i = 0; i < m; ++i) {
        int x;
        cin >> x;
        minHeap.push(x);
        maxHeap.push(x);
    }

    int maxSum = 0;
    int minSum = 0;
    for (int i = 0; i < n; ++i) {
        int maxVal = maxHeap.top();
        maxHeap.pop();
        maxSum += maxVal;
        if (maxVal > 1) {
            maxHeap.push(maxVal - 1);
        }

        int minVal = minHeap.top();
        minHeap.pop();
        minSum += minVal;
        if (minVal > 1) {
            minHeap.push(minVal - 1);
        }
    }
    cout << maxSum << " " << minSum << "\n";
    return 0;
}