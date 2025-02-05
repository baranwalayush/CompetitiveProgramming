#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        
        int is = (k*(k+1))/2;
        is+= (k-1);
        
        if(n>=is) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}