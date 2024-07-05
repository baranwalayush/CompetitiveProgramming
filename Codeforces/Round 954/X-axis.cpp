#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int x1,x2,x3;
        cin>>x1>>x2>>x3;
        
        int ans=INT_MAX;
        
        for(int i=1;i<=10;i++){
            int temp = abs(x1-i) + abs(x2-i) + abs(x3-i);
            ans = min(ans,temp);
        }
        cout<<ans<<endl;
    }
}