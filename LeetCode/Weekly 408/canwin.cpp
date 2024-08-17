class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int s1=0,s2=0;
        for(int n:nums){
            if(n<10) s1+=n;
            else s2+=n;
        }
        if(s1==s2) return false;
        else return true;
    }
};