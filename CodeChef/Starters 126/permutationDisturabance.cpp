#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n,0);
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr[i]=temp;
        }
        
        int cnt=0, i=0;
        while(i<n){
            if(arr[i]!=(i+1)){
                i++;
                continue;
            }
            if(i==n-1){
                cnt++;
                i++;
                continue;
            }
            swap(arr[i],arr[i+1]);
            cnt++;
            i++;
        }
        cout<<cnt<<endl;
    }
}
