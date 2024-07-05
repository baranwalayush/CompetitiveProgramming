#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        
        int d=x*10, t=10;
        int v=d/t;
        while(v<y){
            t++;
            d+=100;
            v=d/t;
        }
        cout<<(t-10)<<endl;
    }
}