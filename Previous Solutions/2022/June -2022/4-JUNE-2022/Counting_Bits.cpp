class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);
        ans[0]=0;
        int k;
        if(n==0) {return ans;}
        
        for(int i=1;i<=n;i*=2){
            ans[i]=1;
        }
        
        for(int i=1;i<=n;i++){
            k=0;
            if(ans[i]==0){
                int tmp=i;
                while(tmp){
                    tmp>>=1;
                    k++;
                }
                int tmp1=1<<k-1;
                int tmp2=i-tmp1;
                
                cout<<i<<" "<<tmp1<<" "<<tmp2<<endl;
                ans[i]=ans[tmp1]+ans[tmp2];
            }
        }
        return ans;
    }
};


// 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
// 0 1 1 2 1 2 2 3 1 2 2  3  2  3  3  4