#include <bits/stdc++.h>
using namespace std;

long long int find(long long int k){
    long long int sum=1;
    //long long int prev=1;
    long long int temp=1;
    for(int i=2;i<=k;i++){
        temp=sum+1;
        sum +=temp;
    }
    return temp;
}
int main() {
	// your code goes here
    long long int t;
    cin>>t;
    while(t--){
        long long int n, k, x;
        cin>>n>>k>>x;
        if(k>30){
            cout<<"NO"<<endl; 
            continue;
        }
        long long int temp = pow(2,k-1);
        if(x>=temp) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
