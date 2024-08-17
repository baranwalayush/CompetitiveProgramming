#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define pb push_back
#define vi vector<int>
#define vl vector<long long int>
using namespace std;
 
void solve(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>>a(n, vector<int>(m,0));
    vector<vector<int>>b(n, vector<int>(m,0));
    
    for(int i=n-1;i>=0;i--){
        string temp;
        cin>>temp;
        for(int j=0;j<m;j++){
            a[i][j]=temp[j]-'0';
        }
    }
    
 
    for(int i=n-1;i>=0;i--){
        string temp;
        cin>>temp;
        for(int j=m-1;j>=0;j--){
            b[i][j]=temp[j]-'0';
        }
    }
 
    for(int j=0;j<m-1;j++){
        for(int i=0;i<n-1;i++){
            if(a[i]!=b[i]){
                if(a[i][j]==0 && b[i][j]==1){
                    a[i][j]+=1;
                    a[i+1][j]=(a[i+1][j]+2)%3;
                    a[i][j+1]=(a[i][j+1]+2)%3;
                    a[i+1][j+1]=(a[i+1][j+1]+1)%3;
                }
                else if(a[i][j]==1 && b[i][j]==0){
                    a[i][j]=(a[i][j]+2)%3;
                    a[i+1][j]=(a[i+1][j]+1)%3;
                    a[i][j+1]=(a[i][j+1]+1)%3;
                    a[i+1][j+1]=(a[i+1][j+1]+2)%3;
                }
                else if(a[i][j]==0 && b[i][j]==2){
                    a[i][j]=(a[i][j]+2)%3;
                    a[i+1][j]=(a[i+1][j]+1)%3;
                    a[i][j+1]=(a[i][j+1]+1)%3;
                    a[i+1][j+1]=(a[i+1][j+1]+2)%3;
                }
                else if(a[i][j]==2 && b[i][j]==0){
                    a[i][j]=(a[i][j]+1)%3;
                    a[i+1][j]=(a[i+1][j]+2)%3;
                    a[i][j+1]=(a[i][j+1]+2)%3;
                    a[i+1][j+1]=(a[i+1][j+1]+1)%3;
                }
                else if(a[i][j]==1 && b[i][j]==2){
                    a[i][j]=(a[i][j]+1)%3;
                    a[i+1][j]=(a[i+1][j]+2)%3;
                    a[i][j+1]=(a[i][j+1]+2)%3;
                    a[i+1][j+1]=(a[i+1][j+1]+1)%3;
                }
                else if(a[i][j]==2 && b[i][j]==1){
                    a[i][j]=(a[i][j]+2)%3;
                    a[i+1][j]=(a[i+1][j]+1)%3;
                    a[i][j+1]=(a[i][j+1]+1)%3;
                    a[i+1][j+1]=(a[i+1][j+1]+2)%3;
                }
 
            }
        }
    }
 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]!=b[i][j]){
                cout<<"No"<<endl;
                return;
            }
        }
    }
 
    cout<<"Yes"<<endl;
    return;
 
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}