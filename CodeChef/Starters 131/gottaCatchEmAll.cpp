#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        long int sum=0;
        vector<int>arr;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
            
            if(temp*x<=y) sum+=temp*x;
            else sum+=y;
        }
        
        
        cout<<sum<<endl;
    }
}