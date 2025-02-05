#include<bits/stdc++.h>

int minimumLength(string s) {
        vector<int>arr(26,0);
        int ans=s.size();

        for(int i=0;i<s.size();i++){
            int val=s[i]-'a';
            arr[val]++;
            if(arr[val]>=3){
                ans-=2;
                arr[val]=1;
            }
        }

        return ans;
    }