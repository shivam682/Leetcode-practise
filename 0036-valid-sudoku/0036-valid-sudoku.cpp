class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

    for (int row = 0; row < 9; row++){
        unordered_set<char> check_row;
        for (int col = 0; col < 9; col++){
            if (board[row][col] != '.' && check_row.find(board[row][col]) != check_row.end()){
                return false;
            }
            check_row.insert(board[row][col]);
        }
    }

    for (int col = 0; col < 9; col++){
        unordered_set<char> check_col;
        for (int row = 0; row < 9; row++){
            if (board[row][col] != '.' && check_col.find(board[row][col]) != check_col.end()){
                return false;
            }
            check_col.insert(board[row][col]);
        }
    }


    for(int i=0;i<9;i+=3){
        for(int j=0;j<9;j+=3){
            unordered_set<int>check_box;
            for(int k=i;k<i+3;k++){
                for(int l=j;l<j+3;l++){
                    if(board[k][l] != '.' && check_box.find(board[k][l]) != check_box.end()){
                        return false;
                    }
                    check_box.insert(board[k][l]);
                }
            }
        }
    }
    return true;
    }
};