class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n=nums.size();
        int windo=n-k;
        
        for(int i=1;i<n;i++) nums[i]+=nums[i-1];
        if(n==k) return nums[n-1];
        int mxpts=INT_MIN;
        
        for(int i=0;i<=n-windo;i++){
            if(i==0) mxpts=nums[n-1]-nums[windo+i-1];
            else mxpts=max(mxpts,nums[n-1]-nums[windo+i-1]+nums[i-1]);
        }
        return mxpts;
    }
};