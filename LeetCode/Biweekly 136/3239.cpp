class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size();
        vector<int>c;
        vector<int>r;
        for(int i=0;i<m;i++){
            int t=0;
            for(int j=0;j<ceil(n/2);j++){
                if(grid[i][j]!=grid[i][n-1-j]) t++;
            }
            c.push_back(t);
        }
        for(int i=0;i<n;i++){
            int t=0;
            for(int j=0;j<ceil(m/2);j++){
                if(grid[j][i]!=grid[m-1-j][i]) t++;
            }
            r.push_back(t);
        }

        sort(c.begin(),c.end());
        sort(r.begin(), r.end());

        int pre1=0, pre2=0;

        for(int n: c) pre1+=n;

        for(int n: r) pre2+=n;

        return min(pre1,pre2);
    }
};