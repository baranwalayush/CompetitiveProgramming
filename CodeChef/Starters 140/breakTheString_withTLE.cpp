// Gives TLE

#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define pb push_back
#define vi vector<int>
#define vl vector<long long int>
#define fastIO() ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

string substr(string s, int l, int m){
    string t;
    for(int i=l;i<l+m;i++) t+=s[i];
    
    return t;
}

void solve(){
    string s;
    cin>>s;
    
    int n= s.size();
    if(n%2==1){
        cout<<0<<endl;
        return;
    }
    int cnt=0;
    int j=n/2;
    string s1=substr(s,0,j), s2=substr(s,j,j);
    if(s1==s2) cnt+=2;
    
    
    for(int i=0;i<j-1;i++){
        if(s[0]!=s[i+1]) continue;
        if(s[i+j]!=s[n-1]) continue;
        string t1=substr(s, 0, i+1);
        string t2=substr(s, i+1, j);
        string t3=substr(s, n-j+(i+1), (j-(i+1)));
        
        if((t1+t2+t3 == s) && ((t1+t3)==t2)) cnt++;
    }
    cout<<cnt<<endl;
}

int main(){
    fastIO();
    
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}