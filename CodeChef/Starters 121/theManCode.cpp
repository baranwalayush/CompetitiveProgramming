#include <bits/stdc++.h>
using namespace std;

int check(int n){
    int cnt=0;
    for(int i=2;i<=n;i=i+2){
        cnt++;
    }
    cout<<n/2<<" "<<cnt<<endl;
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0 && n%3==0){
            cout<<n/2<<" "<<n/3<<endl;
        }
        else if(n%2==1 && n%3==0){
            cout<<(n/2)+1<<" "<<n/3<<endl;
        }
        else if(n%2==0 && n%3!=0){
            cout<<n/2<<" "<<(n/3)+1<<endl;
        }
        else{
            cout<<(n/2)+1<<" "<<(n/3)+1<<endl;
        }
        
        //cout<<ceil(n/2)<<" "<<ceil(n/3)<<endl;
    }
}