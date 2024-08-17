class neighborSum {
public:
    vector<vector<int>>g;
    unordered_map<int, pair<int, int>> arr;
    neighborSum(vector<vector<int>>& grid) {
        g=grid;

        for(int i=0;i<g.size();i++){
            for(int j=0;j<g.size();j++){
                arr[g[i][j]]={i,j};
            }
        }
    }
    
    int adjacentSum(int value) {
        int sum=0;

        pair<int,int> p = arr[value];
        int i=p.first, j=p.second;
        if(i-1>=0) sum+= g[i-1][j];
        if(i+1<g.size()) sum+=g[i+1][j];
        if(j-1>=0) sum+=g[i][j-1];
        if(j+1<g.size()) sum+= g[i][j+1];

        return sum;
    }
    
    int diagonalSum(int value) {
        int sum=0;

        pair<int,int> p = arr[value];
        int i=p.first, j=p.second;
        if(i-1>=0 && j-1>=0) sum+= g[i-1][j-1];
        if(i+1<g.size() && j+1<g.size()) sum+=g[i+1][j+1];
        if(j-1>=0 && i+1<g.size()) sum+=g[i+1][j-1];
        if(j+1<g.size() && i-1>=0) sum+= g[i-1][j+1];

        return sum;
    }
};

/**
 * Your neighborSum object will be instantiated and called as such:
 * neighborSum* obj = new neighborSum(grid);
 * int param_1 = obj->adjacentSum(value);
 * int param_2 = obj->diagonalSum(value);
 */