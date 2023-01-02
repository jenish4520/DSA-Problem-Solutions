class Solution
{
    public:    
        vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            int i=0, j=0, k=0, l=0;
            vector<int>D;
            vector<int>ans;
            
            while(i<n1 && j<n2){
                while(i+1<n1 && A[i]==A[i+1]) i++;
                while(j+1<n2 && B[j]==B[j+1]) j++;
                
                if(A[i]==B[j]) D.push_back(A[i]), i++, j++;
                else if(A[i]>B[j]) j++;
                else if(B[j]>A[i]) i++;
            }
            int n4=D.size();
            
            while(k<n3 && l<n4){
                while(k+1<n3 && C[k]==C[k+1]) k++;
                while(l+1<n4 && D[l]==D[l+1]) l++;
                
                if(C[k]==D[l]) ans.push_back(C[k]), k++, l++;
                else if(C[k]>D[l]) l++;
                else if(D[l]>C[k]) k++;
            }
            return ans;
        }

};
