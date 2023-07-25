class Solution {
public:
     void floodFillDFS(int row, int col, int initialColor, int newColor, vector<vector<int>>& image) {


        if (row < 0 || col < 0 || row >= image.size() || col >= image[0].size() || image[row][col] != initialColor)
            return;

 
        image[row][col] = newColor;
        
      
        floodFillDFS(row - 1, col, initialColor, newColor, image);
        floodFillDFS(row + 1, col, initialColor, newColor, image); 
        floodFillDFS(row, col - 1, initialColor, newColor, image); 
        floodFillDFS(row, col + 1, initialColor, newColor, image); 
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int initialColor = image[sr][sc];
        
        if (initialColor != newColor) {
            floodFillDFS(sr, sc, initialColor, newColor, image);
        }
        
        return image;
    }
};