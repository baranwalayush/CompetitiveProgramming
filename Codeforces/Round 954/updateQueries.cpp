#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
 
        string s,c;
        cin>>s;
        vector<int>arr(m);
 
        for(int i=0;i<m;i++) cin>>arr[i];
 
        cin>>c;
        sort(arr.begin(), arr.end());
        sort(c.begin(), c.end());
     
        s[arr[0]-1]=c[0];
        int j=1;

        for(int i=1;i<m;i++){
            if(arr[i]==arr[i-1]) continue;
            s[arr[i]-1]=c[j++];
        }
 
        cout<<s<<endl;
 
    }
}