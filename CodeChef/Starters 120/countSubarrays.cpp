#include <bits/stdc++.h>
using namespace std;

/*int check(vector<int> &arr, int &n){
    int sum=1;
    int cnt=0;
    for(int i=0;i<n;i++){
        int s=0;
        for(int j=i;j<n;j++){
            s+=arr[j];
            if(s==sum){
                cnt++;
            }
            else if(s>sum){
                j=n;
                cout<<cnt<<" ";
                sum++;
                cnt=0;
            }
        }
        
    }
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        check(arr,n);
    }
    
}*/

void countSubarraysWithSum(const vector<int>& P, int N) {
    unordered_map<int, int> prefixSumCount;

    for (int i = 0; i < N; ++i) {
        int currentSum = 0;
        for(int j=i;j<N;j++){
            currentSum += P[j];
            if(currentSum>N){
                break;
            }
            prefixSumCount[currentSum]++;
        }
    }

    // For each sum from 1 to N, print the count of subarrays with that sum
    for (int sum = 1; sum <= N; ++sum) {
        cout << prefixSumCount[sum] << " ";
    }

    cout << endl;
}

int main() {
    // Example usage
    int t;
    cin>>t;
    while(t--){
    int N;
    cin >> N;

    vector<int> P(N);
    for (int i = 0; i < N; ++i) {
        cin >> P[i];
    }
    countSubarraysWithSum(P, N);
    }
    return 0;
}