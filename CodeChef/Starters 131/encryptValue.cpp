#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        vector<long long int>arr;
        for(long int i=0;i<n;i++){
            long long int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        sort(arr.begin(),arr.end());
        long long int mod = 1000000007;
        long long int sum=0;
        
        for(long int i=0;i<n;i++){
            long long int temp=max((sum*arr[i]), (sum+arr[i]));
            sum=temp%mod;
        }
        cout<<sum<<endl;
    }
}