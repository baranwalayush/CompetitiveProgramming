#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int sum=1+2+4+8+16+32+64;
	int n;
	cin>>n;
	vector<int> budget(n,0);
	int i=0;
	while(i<n){
	    cin>>budget[i];
	    i++;
	}
	for(int j=0;j<n;j++){
	    if(budget[j]>=sum){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}

}