#include <bits/stdc++.h>
using namespace std;
int reverse(int n){
    int temp=0;
    while(n>0){
        temp = temp*10 + (n%10);
        n/=10;
    }
    return temp;
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a>b) cout<<"Yes"<<endl;
        else{
            int tempa=reverse(a);
            int tempb=reverse(b);
            if(tempa>b) cout<<"Yes"<<endl;
            else if(a>tempb) cout<<"YES"<<endl;
            else if(tempa>tempb) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
}