#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define vi vector<int>
#define vl vector<long long int>
using namespace std;

bool check(ll num) {
    return (num & (num + 1)) == 0;
}

void solve() {
    int n;
    cin >> n;
    vl arr(n);
    
    ll total=0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        total |= arr[i];
    }

    if (check(total)) {
        cout << 0 << endl;
        return;
    }

    sort(arr.begin(), arr.end());
    vector<ll> prefix_or(n), suffix_or(n);
    prefix_or[0] = arr[0];
    suffix_or[n - 1] = arr[n - 1];

    for (int i = 1; i < n; i++) {
        prefix_or[i] = prefix_or[i - 1] | arr[i];
    }
    for (int i = n - 2; i >= 0; i--) {
        suffix_or[i] = suffix_or[i + 1] | arr[i];
    }


    int cnt = n;

    for (int i = 0; i < n; i++) {

        if (check(prefix_or[i])) {
            cnt = min(cnt, n-i-1);
        }
        if (check(suffix_or[i])) {
            cnt = min(cnt, i);
        }
    }

    cout << cnt << endl;
}

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
