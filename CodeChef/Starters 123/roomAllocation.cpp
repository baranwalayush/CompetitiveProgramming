#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        int ans=0;
        while(n--){
            int num;
            cin>>num;
            if(num%2==0) ans+=num/2;
            else ans += num/2 +1;
        }
        cout<<ans<<endl;
    }
    
}
