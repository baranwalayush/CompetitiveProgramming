#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long int score=0;
        int n;
        cin>>n;
        if(n%2==0){
            score += n/2;
            score += 12*n/2;
        }
        else{
            int temp=n-1;
            score+=temp/2;
            score+=12*temp/2;
            score+=6;
        }
        cout<<score<<endl;
    }
}
