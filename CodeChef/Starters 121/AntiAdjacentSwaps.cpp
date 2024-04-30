#include <bits/stdc++.h>
using namespace std;

void check(vector<int>&arr){

}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        if(n==1){
            cout<<"yes"<<endl;
        }
        else if(n==2){
            if(arr[0]>arr[1]) cout<<"no"<<endl;
            else cout<<"yes"<<endl;
        }
        else if(n==3){
            if(arr[1]>max(arr[0],arr[2]) || arr[1]<min(arr[0],arr[2])){
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            }
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
}