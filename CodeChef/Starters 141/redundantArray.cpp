#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define pb push_back
#define vi vector<int>
#define vl vector<long long int>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    vector<int>mpp(n+1,0);
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr[i]=temp;
        mpp[temp]++;
    }
    int ans=n;
    for(int i=2;i<=n;i++){
        if(mpp[i]>=(n-(ceil(n/i)))){
            ans=min(ans,(i*(n-mpp[i])));
        }
    }
    ans=min(ans,(n-mpp[1]));
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
