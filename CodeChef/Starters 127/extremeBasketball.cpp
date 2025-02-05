#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        int ans=0;
        int temp=a-b;
        if(temp>=10){
            cout<<ans<<endl;
        }
        else{
            int x = 10-temp;
            if(x%3==0) ans = x/3;
            else ans = (x/3)+ 1;
            
            cout<<ans<<endl;
        }
       
    }
}
