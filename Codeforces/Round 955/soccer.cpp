#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
 
        int c,d;
        cin>>c>>d;
 
        if((a>=b && c>=d) || (a<=b) && (c<=d)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}