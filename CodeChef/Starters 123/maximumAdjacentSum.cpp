#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        sort(arr.begin(),arr.end());
        long int ans=0;
        for(int i=2;i<n;i++){
            ans += arr[i]*2;
        }
        ans+= arr[0] + arr[1];
        cout<<ans<<endl;
    }
}
