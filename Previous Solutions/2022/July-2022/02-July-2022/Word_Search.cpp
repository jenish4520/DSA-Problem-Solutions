class Solution {
public:
    
    bool findTheWord(vector<vector<char>> &board, int i, int j, string word, int k){
        if(k==word.length()) return true;
        if(i<0 || j<0 || i==board.size() || j==board[0].size()) return false;
        
        if(board[i][j]!=word[k]) return false;
        
        char tmp=board[i][j];
        board[i][j]='*';
        
        bool up=findTheWord(board,i,j+1,word,k+1);
        bool down=findTheWord(board,i,j-1,word,k+1);
        bool left=findTheWord(board,i-1,j,word,k+1);
        bool right=findTheWord(board,i+1,j,word,k+1);
        
        if(up || down || left || right) return true;
        
        //Backtrack and return
        board[i][j]=tmp;
        
        return false;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        int index=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(findTheWord(board,i,j,word,index))
                    return true;
            }
        }
        return false;
    }
};