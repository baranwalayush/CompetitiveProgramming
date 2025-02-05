#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    long int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long prod=0;
        for(int i=1;i<=n;i++){
            int temp;
            cin>>temp;
            if(temp==2) prod++;
        }
        if(prod%8==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
}