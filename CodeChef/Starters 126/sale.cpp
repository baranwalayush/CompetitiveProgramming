#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    long int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        vector<long long int>sales(n,0);
        long long int max_sales=0, prev=0;
        for(int i=0;i<n;i++){
            int s;
            cin>>s;
            sales[i]=s;
            if(i==0) max_sales = 2*s;
            if(i!=0) max_sales = max(prev+2*s,max_sales);
            prev +=s;
        }
        cout<<max_sales<<endl;
    }
}
