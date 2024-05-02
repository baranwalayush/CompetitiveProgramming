#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    
    while(n--){
        int x,y;
        cin>>x>>y;
        int blank=x-1;
        cout<<y/blank<<endl;
    }
}