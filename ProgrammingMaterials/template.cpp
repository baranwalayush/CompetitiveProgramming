#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define pb push_back
#define vi vector<int>
#define vl vector<long long int>
#define read(arr, high) for(int i=0;i<high;i++){cin>>arr[i];}
#define loop(i, high) for(int i=0;i<high;i++)
using namespace std;

void solve(){
    int n;
    cin>>n;
    vi arr(n);
    read(arr, n);
    loop(i, n){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
