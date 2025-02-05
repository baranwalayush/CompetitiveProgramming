#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        vector<int> leg;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            leg.push_back(temp);
        }
        sort(leg.begin(),leg.end());
        int ans=leg[0]*n;
        for(int i=0;i<n;i++){
            int temp=leg[i]*(n-i);
            ans=max(ans,temp);
        }
        cout<<ans<<endl;
        
    }
}