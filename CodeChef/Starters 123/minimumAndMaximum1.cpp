#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        long int temp=n/2;
        long int ans=0;
        ans = temp*(temp+1)/2;
        ans = ans*2;
        if(n%2==0){
            cout<<ans<<endl;
        }
        else{
            ans+= temp+1;
            cout<<ans<<endl;
        }
        
        
    }
}
