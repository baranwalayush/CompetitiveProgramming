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
    if(n==1){
        cout<<1<<endl;
    }
    else if(n==2){
        cout<<1<<" "<<2<<endl;
    }
    else{
        vi a;
        if(n%2==1){
            a.pb(n);
            int i=1, j=n-1;
            while(i<=j){
                a.pb(i);
                a.pb(j);
                i++;
                j--;
            }
        }
        else{
            int i=1, j=n;
            while(i<=j){
                a.pb(i);
                a.pb(j);
                i++;
                j--;
            }
            
        }
        
        for(int num:a){
            cout<<num<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}