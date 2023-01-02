class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int initial_value_of_first=mat[0][0];
        bool does_row_initially_contains_zero=false;
        bool does_column_initially_contains_zero=false;
        
        for(int i=1;i<n;i++)
            if(mat[i][0]==0) does_row_initially_contains_zero=true;
        for(int j=1;j<m;j++)
            if(mat[0][j]==0) does_column_initially_contains_zero=true;
        
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++)
                if(mat[i][j]==0) mat[i][0]=0, mat[0][j]=0;
        }
        
        for(int i=1;i<n;i++){
            if(mat[i][0]==0)
                for(int j=1;j<m;j++) mat[i][j]=0;
        }
        for(int j=1;j<m;j++){
            if(mat[0][j]==0)
                for(int i=1;i<n;i++) mat[i][j]=0;
        }
        
        if(initial_value_of_first==0){
            for(int i=0;i<n;i++) mat[i][0]=0;
            for(int j=0;j<m;j++) mat[0][j]=0;
        }
        else{
            if(does_row_initially_contains_zero) for(int i=0;i<n;i++) mat[i][0]=0;
            if(does_column_initially_contains_zero) for(int j=0;j<m;j++) mat[0][j]=0;
        }
    }
};
