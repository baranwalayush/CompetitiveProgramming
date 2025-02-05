#include <bits/stdc++.h>
using namespace std;

int findParity(int num) {
    int parity = 0;

    while (num) {
        parity ^= (num & 1);
        num >>= 1;
    }

    return parity;
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        //if(x%2==0) cout<<"odd"<<endl;
        
        bitset<32> binaryRepresentation(x);
        int ans=findParity(x);
        if(!ans) cout<<"Even"<<endl;
        else cout<<"Odd"<<endl;
       
                
    }
}