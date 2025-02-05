#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long int n,k;
        cin>>n>>k;
        vector<int>arr;
        long int ans=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            if(temp<4) cnt++;
            arr.push_back(temp);
        }
        sort(arr.begin(),arr.end());
        int i=0;
        for(i;i<k;i++){
            if(arr[i]<4){
                if(arr[i]==1) ans+=6;
                else if(arr[i]==2) ans+=5;
                else ans+=4;
            }
            else{
                break;
            }
        }
        for(i;i<n;i++){
            ans+=arr[i];
        }
        
        cout<<ans<<endl;
    }
}