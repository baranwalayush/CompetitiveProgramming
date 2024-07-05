#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long long int n, k;
        cin>>n>>k;
        vector<long long int>arr;
        for(long int i=0;i<n;i++){
            long long int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        sort(arr.begin(),arr.end());
        long long int maxi=arr[n-1];
        long long int ans=0;
        for(int j=0;j<n;j++){
            long long int temp=(maxi-arr[j]);
            arr[j]=arr[j]+((temp/k)*k);
            //ans=max(ans,(maxi-arr[j]));
        }
        long long int mini=arr[n-1];
        //cout<<"num"<<arr[2]<<endl;
        for(int i=0;i<n;i++) mini=min(mini,arr[i]);
        ans =maxi-mini;
        sort(arr.begin(),arr.end());
        maxi=arr[n-1];
        
        for(int j=0;j<n;j++){
            ans=min(ans,abs(maxi-arr[j]));
            maxi=max(maxi,arr[j]+k);
        }
        cout<<ans<<endl;
    }
}