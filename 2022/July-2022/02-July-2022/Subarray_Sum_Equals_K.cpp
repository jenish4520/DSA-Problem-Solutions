class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map<int,int>mp;
        mp[0]++;
        int sum=0, cnt=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(mp.find(sum-k)!=mp.end()) cnt+=mp[sum-k]; // cnt++ don't work because ->[0,0,0,0,0] , k=0
            mp[sum]++;
        }
        return cnt;
    }
};