class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        long long n=nums.size();
        long long start, end;
        
        for(long long i=0;i<n;i++){
            for(long long j=i+1;j<n;j++){
                start=j+1;
                end=n-1;
                long long tar=((long long)target-(long long)nums[i]-(long long)nums[j]);
                
                while(start<end){
                    long long sum=nums[start]+nums[end];
                    
                    if(sum<tar) start++;
                    else if(sum>tar) end--;
                    else{
                        ans.push_back({nums[i], nums[j], nums[start], nums[end]});
                        
                        while(start+1<end && nums[start]==nums[start+1]) start++;
                        while(end-1>start && nums[end]==nums[end-1]) end--;
                        start++;
                        end--;
                    }
                 }
                while(j+1<n && nums[j]==nums[j+1]) j++;
            }
            while(i+1<n && nums[i]==nums[i+1]) i++;
        }
        
        return ans;
    }
};