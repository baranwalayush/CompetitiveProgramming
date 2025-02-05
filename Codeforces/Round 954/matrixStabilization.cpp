#include <bits/stdc++.h>
using namespace std;
 
 
bool check(int i, int j, int n, int m, vector<vector<int>>& arr) {
    if (i > 0 && arr[i-1][j] >= arr[i][j]) return false;
    if (j > 0 && arr[i][j-1] >= arr[i][j]) return false;
    if (i < n-1 && arr[i+1][j] >= arr[i][j]) return false;
    if (j < m-1 && arr[i][j+1] >= arr[i][j]) return false;
    return true;
}
 
 
int find(int i, int j, int n, int m, vector<vector<int>>& arr) {
    int maxi = 0;
    if (i > 0) maxi = max(arr[i-1][j], maxi);
    if (j > 0) maxi = max(arr[i][j-1], maxi);
    if (i < n-1) maxi = max(arr[i+1][j], maxi);
    if (j < m-1) maxi = max(arr[i][j+1], maxi);
    return maxi;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> arr(n, vector<int>(m, 0));
        
 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        
 
        priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> pq;
        
 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                pq.push(make_tuple(arr[i][j], i, j));
            }
        }
 
        while (!pq.empty()) {
            auto [val, x, y] = pq.top();
            pq.pop();
 
            if (check(x, y, n, m, arr)) {
                int newVal = find(x, y, n, m, arr);
                /*if (newVal > arr[x][y]) {
                    arr[x][y] = newVal;
                    pq.push(make_tuple(newVal, x, y));
                }*/
                arr[x][y] = newVal;
                //cout<<newVal<<endl;
            }
        }
        
 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}