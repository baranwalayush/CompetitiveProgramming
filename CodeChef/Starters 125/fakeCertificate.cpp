#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        int cnt1=0;
        int cnt0=0;
        int ans=0;
        //bool flag;
        
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                cnt1++;
                cnt0=0;
            }
            else{
                cnt0++;
                ans = max(cnt0,ans);
            }
        }
        
        if(cnt1==n){
            cout<<n<<endl;
            continue;
        }
        else{
            cout<<cnt1+ans<<endl;
        }
        
    }
}