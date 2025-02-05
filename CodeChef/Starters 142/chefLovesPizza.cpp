#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define pb push_back
#define vi vector<int>
#define vl vector<long long int>
using namespace std;

void solve(){
    int x;
    cin>>x;
    
    if(x==2 || x==4){
        cout<<"0"<<endl;
        return;
    }
    
    int temp = ceil(log2(x/2));
    int val=pow(2,temp);
    int ans=0;
    if(val==x/2) ans=0;
    else ans=x - 2*(pow(2,temp)-(x/2));
    
    cout<<ans<<endl;
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}