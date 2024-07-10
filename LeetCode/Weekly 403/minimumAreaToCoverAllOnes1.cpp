class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        int j1=m, j2=-1, i1=n, i2=-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    j1=min(j1,j);
                    j2=max(j,j2);
                    
                    i1=min(i1,i);
                    i2=max(i2,i);
                }
            }
        }
        //cout<<i1<<" "<<i2<<" "<<j1<<" "<<j2<<endl;
        int ans=((j2-j1+1)*(i2-i1+1));
        if(i1==i2 && j1==j2) return 1;
        return ans;
    }
};