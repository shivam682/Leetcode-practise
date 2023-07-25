class Solution {
public:
    void dfs(int row, int col, vector<vector<int>>&vis ,vector<vector<char>>& grid){
        if(row<0||row>=grid.size()||col<0||col>=grid[0].size()||grid[row][col]=='0'||vis[row][col]==1){
            return;
        }
        vis [row][col]=1;
        
        
        dfs(row+1,col,vis,grid);
        dfs(row-1,col,vis,grid);
        dfs(row,col+1,vis,grid);
        dfs(row,col-1,vis,grid);
        
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans =0;
        int m=grid.size();
        int n =grid[0].size();
        vector<vector<int>> vis(m, vector<int>(n,0));
        
        for(int row=0;row<m;row++){
            for(int col=0;col<n;col++){
                if(!vis[row][col]&&grid[row][col]=='1'){
                    dfs(row, col, vis, grid);
                    ans++;
                    
        
                }
            }
        }
        return ans;
        
    }
};