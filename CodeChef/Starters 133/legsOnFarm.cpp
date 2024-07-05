#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n%4==0) cout<<n/4<<endl;
	    else{
	        int ans = (n-2)/4 + 1;
	        cout<<ans<<endl;
	    }
	}

}