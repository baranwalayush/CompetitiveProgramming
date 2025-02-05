
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> temp;
        int len=0;
        for(int i=0;i<n;i+=2){
            if(s[i+1]!=s[i]){
                len++;
                if(temp.empty()) temp.push_back(i+1);
                else{
                    if(s[temp[temp.size()-1]]==s[i]){
                        temp.push_back(i+1);
                    }
                    else{
                        temp.push_back(i);
                    }
                }
            }
        }
        cout<<len<<endl;
        for(int n:temp){
            //if(n==0) continue;
            cout<<n+1<<" ";
        }
        cout<<endl;
        
    }
}