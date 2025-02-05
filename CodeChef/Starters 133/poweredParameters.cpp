#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>arr(n);
        for(int i=0;i<n;i++){
            ll temp;
            cin>>temp;
            arr[i]=temp;
        }
        
        ll cnt=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1) cnt+=n;
            else{
                ll temp=1;
                for(int j=0;j<n;j++){
                    //if(pow(arr[i],j+1) <= arr[j]) cnt++;
                    temp*=arr[i];
                    if(temp>1000000000) break;
                    else{
                        if(temp<=arr[j]) cnt++;
                    }
                }
            }
        }
        cout<<cnt<<endl;
    }
}