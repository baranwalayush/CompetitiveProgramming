#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define pb push_back
#define vi vector<int>
#define vl vector<long long int>
using namespace std;

void solve(){
    int x,y;
    cin>>x>>y;
    bool flag=false;
    
    if(y==x) flag=true;
    else if(y>x){
        if(abs(y-x)<=2) flag=true;
    }
    else{
        if(x-y<=1) flag=true;
    }
    
    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}