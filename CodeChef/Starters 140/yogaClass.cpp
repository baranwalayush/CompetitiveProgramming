#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define pb push_back
#define vi vector<int>
#define vl vector<long long int>
using namespace std;

void solve(){
    int n,x,y;
    cin>>n>>x>>y;
    
    if(2*x>y){
        cout<<n*x<<endl;
    }
    else{
        if(n%2==0){
            cout<<(n/2)*y<<endl;
        }
        else{
            cout<<((n-1)/2)*y + x<<endl;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}