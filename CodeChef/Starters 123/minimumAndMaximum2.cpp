#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        long int ans=0;
        ans = n*(n+1)/2;
        ans+=n-1;
        cout<<ans<<endl;
    }
}
