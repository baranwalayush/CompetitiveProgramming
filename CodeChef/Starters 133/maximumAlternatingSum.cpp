#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr[i]=temp;
        }
        sort(arr.begin(), arr.end());
        int ans=0;
        
        if(n%2==0){
            int i=0;
            while(i!=n/2){
                ans+=arr[n-1-i];
                ans-=arr[i];
                i++;
            }
        }
        else{
            int i=0;
            while(i!=n/2){
                ans+=arr[n-1-i];
                ans-=arr[i];
                i++;
            }
            ans+= arr[n/2];
            
        }
        cout<<ans<<endl;
        
    }
}