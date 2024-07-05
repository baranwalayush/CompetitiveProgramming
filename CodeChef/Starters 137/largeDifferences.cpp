#include <bits/stdc++.h>
using namespace std;

long int find(vector<long int>arr){
    long int sum=0;
    for(long int i=1;i<arr.size();i++){
        sum+= abs(arr[i]-arr[i-1]);
    }
    return sum;
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long int n,k;
        cin>>n>>k;
        vector<long int>arr(n);
        
        for(long int i=0;i<n;i++) cin>>arr[i];
        
        long int sum=find(arr);
        long int maxi=sum;
        
        for(int i=0;i<n;i++){
            long int temp=arr[i];
            arr[i]=k;
            long int t1 = find(arr);
            maxi=max(t1,maxi);
            
            arr[i]=1;
            long int t2=find(arr);
            maxi=max(maxi,t2);
            
            arr[i]=temp;
        }
        cout<<maxi<<endl;
    }
}