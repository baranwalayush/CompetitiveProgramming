#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        
        if(n==2){
            cout<<"Yes"<<endl;
            continue;
        }
        
        /*if(a[1]-b[1]>a[0] && a[n-2]+b[n-2]<a[n-1]){
            cout<<"No"<<endl;
            continue;
        }*/
        
        int l1=0,l2=n-1,r1=n-1,r2=0;
        
        for(int i=0;i<n-1;i++){
            if(a[i]+b[i]>=a[i+1]) l1=i+1;
            else break;
        }
        
        for(int i=n-1;i>=1;i--){
            if(a[i]-b[i]<=a[i-1]) r1=i-1;
            else break;
        }
        
        for(int i=0;i<n-1;i++){
            if(a[i]>=a[i+1]-b[i+1]) r2=i+1;
            else break;
        }
        
        for(int i=n-1;i>=1;i--){
            if(a[i]<=a[i-1]+b[i-1]) l2=i-1;
            else break;
        }
        
        int l=max(l1,r2);
        int r=min(l2,r1);
        
        if(l+1>=r) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        
    }
}