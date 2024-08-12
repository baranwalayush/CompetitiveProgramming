#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define pb push_back
#define vi vector<int>
#define vl vector<long long int>
using namespace std;

void solve(){
    int n, m;
    cin>>n>>m;
    string a, b;
    cin>>a>>b;
    int ans=m;
    for(int i=0;i<n-m+1;i++){
        int cnt=0;
        int k=0;
        for(int j=i;j<m+i;j++){
            if(a[j]!=b[k]) cnt++;
            k++;
        }
        ans=min(ans,cnt);
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
