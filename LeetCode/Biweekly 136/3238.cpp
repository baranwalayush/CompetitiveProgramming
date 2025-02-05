class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        vector<vector<int>>arr(n, vector<int>(11,0));

        for(int i=0;i<pick.size();i++){
            int x=pick[i][0];
            int y=pick[i][1];
            arr[x][y]++;
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<11;j++){
                if(arr[i][j]>i){
                    cnt++;
                    break;
                }
            }
        }
        return cnt;
    }
};