#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> attA;
        vector<int> attP;
        vector<int> defA;
        vector<int> defP;
        long long int atta=0;
        long long int attp=0;
        long long int defa=0;
        long long int defp=0;
        for(int i=1;i<=n;i++){
            int temp;
            cin>>temp;
            atta+=temp;
        }
        for(int i=1;i<=n;i++){
            int temp;
            cin>>temp;
            defa+=temp;
        }
        for(int i=1;i<=n;i++){
            int temp;
            cin>>temp;
            attp+=temp;
        }
        for(int i=1;i<=n;i++){
            int temp;
            cin>>temp;
            defp+=temp;
        }
        
        if(atta>attp && defa>defp) cout<<"A"<<endl;
        else if(atta<attp && defa<defp) cout<<"P"<<endl;
        else cout<<"DRAW"<<endl;
    }
}