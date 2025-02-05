#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long int>arr(n,0);
        for(long int i=0;i<n;i++){
            long long int temp;
            cin>>temp;
            arr[i]=temp;
        }
        long long int cnt=0;
        /*
        for(int i=0;i<n;i++){
            if(arr[i]%3!=0 || arr[i]==3) continue;
            
            for(int j=i+1;j<n;j++){
                /*long long int a = arr[i]-arr[j];
                long long int b = arr[i]+arr[j];
                long long int c = arr[i]*arr[j];
                //if((b-a)==(c-b)) cnt++;
                long long int temp = arr[i]-3;
                if(arr[j]==arr[i]/temp) cnt++;
            }
        }*/
    
        unordered_map<long long int,long long int> mpp;
        for(long long int it:arr){
            mpp[it]++;
        }
 
        for(long int i=0;i<n;i++){
            
            if(arr[i]<=3){
                mpp[arr[i]]--;
                continue;
            }
            long long int temp1=arr[i];
            long long int temp2=arr[i]-3;
            if(temp1%temp2!=0){
                mpp[arr[i]]--;
                continue;
            }
            
            long long int temp3=temp1/temp2;
            if(temp3==arr[i]){
                if(mpp[temp3]-1>0){
                    cnt+=mpp[temp3]-1;
                }
            }
            else{
                if(mpp[temp3]>0){
                    cnt+=mpp[temp3];
                }
            }

            mpp[arr[i]]--;
        }
   
        cout<<cnt<<endl;
    }
    
    
}
