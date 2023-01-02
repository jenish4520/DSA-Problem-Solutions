class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int start, end;
        
        for(int i=0;i<n;i++){
            start=i+1;
            end=n-1;
            int target=-nums[i];
            
            while(start<end){
                int sum=nums[start]+nums[end];
                
                if(sum<target) start++;
                else if(sum>target) end--;
                else{
                    ans.push_back({nums[i], nums[start], nums[end]});
                    while(start+1<end && nums[start]==nums[start+1]) start++;
                    while(end-1>start && nums[end]==nums[end-1]) end--;
                    start++;
                    end--;
                }
            }
            while(i+1<n && nums[i]==nums[i+1]) i++;
        }
        return ans;
    }
};