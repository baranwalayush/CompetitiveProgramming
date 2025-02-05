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
    
    int ans=0;
    if(n%4==0){
        ans=n/4;
    }
    else{
        ans++;
        ans+=(n-2)/4;
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