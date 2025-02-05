#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define pb push_back
#define vi vector<int>
#define vl vector<long long int>
using namespace std;
 
void solve(){
    int n,k;
    cin>>n>>k;
    
    vector<string>arr(n);
    
    for(int i=0;i<n;i++){
        string s;
        for(int j=0;j<n;j++){
            char temp;
            cin>>temp;
            s+=temp;
        }
        arr[i]=s;
    }
    
    vector<string> ans;
    
    for(int i=0;i<n;i+=k){
        string s;
        for(int j=0;j<n;j+=k){
            s+=arr[i][j];
        }
        ans.pb(s);
        cout<<s<<endl;
    }
    
    
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}