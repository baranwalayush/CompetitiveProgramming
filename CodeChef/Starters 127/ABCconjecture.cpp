#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    long int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        string s1, s2;
        cin>>s1;
        cin>>s2;
        int temp=-1;
        bool flag=true;
        vector<int> arr;
        int min=0, del=0;
        for(int i=0;i<n;i++){
            if(s1[i]==s2[i]){
                if(s1[i]=='b') temp=i;
            }
            else if(s1[i]=='a' && s2[i]=='c'){
                arr.push_back(i);
            }
            else if(s1[i]=='c' && s2[i]=='a'){
                if((arr.size()-del)!=0 && arr[min]<temp){
                    min=min+1;
                    del++;
                }
                else{
                    flag=false;
                    cout<<"NO"<<endl;
                    break;
                }
            }
            else{
                flag=false;
                cout<<"NO"<<endl;
                break;
            }
        }
        
        if(flag && (arr.size()-del)>0) cout<<"NO"<<endl;
        else if(flag)cout<<"YES"<<endl;
    }
}
