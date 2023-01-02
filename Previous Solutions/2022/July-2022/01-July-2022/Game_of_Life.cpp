class Solution {
public:
    int count(vector<vector<int>> &board, int i, int j, int n, int m){
        int dxy[]={1,-1,-1,0,1,1,0,-1,1}; //To check all 8 neighbours
        int cnt=0;
        
        for(int k=0;k<8;k++){
            int di=dxy[k];
            int dj=dxy[k+1];
            if((i+di)>=0 && (j+dj)>=0 && (i+di)<n && (j+dj)<m && board[i+di][j+dj]>=1) cnt++;
        }
        return cnt;
    }
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size();
        int m=board[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int live=count(board,i,j,n,m);
                if(board[i][j]>=1 && live<2) board[i][j]=2;
                else if(board[i][j]>=2 && (live==2 || live==3)) continue;
                else if(board[i][j]>=1 && live>3) board[i][j]=2;
                else if(board[i][j]<=0 && live==3) board[i][j]=-1; 
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==2) board[i][j]=0;
                else if(board[i][j]==-1) board[i][j]=1;
            }
        }  
    }
};