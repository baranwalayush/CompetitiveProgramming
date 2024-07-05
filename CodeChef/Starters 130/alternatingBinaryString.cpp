#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        string s;
        cin>>s;
        bool flag=false;
        int cnt=0;
        if(n==1) cout<<"0"<<endl;
        else{
            for(int i=1;i<n;i++){
                if(s[i-1]!=s[i]) continue;
                else cnt++;
            }
            cout<<cnt<<endl;
        }
        
    }
}