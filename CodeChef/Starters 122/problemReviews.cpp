#include <bits/stdc++.h>
using namespace std;

void check(vector<int>&arr, int n){
    for(int i=0;i<n;i++){
        if(arr[i]<=4){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    return;
}
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int temp=n;
        vector<int>arr;
        while(temp--){
            int score;
            cin>>score;
            arr.push_back(score);  
        }
        check(arr,n);
    }
}
