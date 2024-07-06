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
    vi arr(n);
    bool flag=false;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1) flag=true;
    }
    
    if(!flag){
        cout<<"No"<<endl;
        return;
    }
    
    sort(arr.begin(),arr.end());
    
    for(int i=0;i<n;i++){
        if(arr[i]<=(i+1)) continue;
        else{
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;
    return;
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}