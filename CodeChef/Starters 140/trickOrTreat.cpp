#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define pb push_back
#define vi vector<int>
#define vl vector<long long int>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    vl a(n);
    vl b(n);
    
    for(int i=0;i<n;i++) cin>>a[i];
    
    for(int i=0;i<n;i++) cin>>b[i];
    
    if(m==1){
        cout<<n*n<<endl;
        return;
    }
    
    vl freq_a(m, 0);
    vl freq_b(m, 0);
    
    for (int i = 0; i < n; i++) {
        freq_a[a[i] % m]++;
        freq_b[b[i] % m]++;
    }
    
    ll cnt = 0;
    
    for (int i = 0; i < m; i++) {
        cnt += freq_a[i] * freq_b[(m - i) % m];
    }
    
    cout<<cnt<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}