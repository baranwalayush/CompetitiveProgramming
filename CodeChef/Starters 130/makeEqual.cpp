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
        int val;
        for(int i=0;i<n;i++){
            long long int temp;
            cin>>temp;
            arr[i]=temp;
        }
        val=arr[0];
        bool flag=true;
        for(int i=1;i<n && flag;i++){
            if(val>arr[i]) flag=false;
        }
        if(arr[0]!=arr[n-1]) flag=false;
        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        
        
    }
}