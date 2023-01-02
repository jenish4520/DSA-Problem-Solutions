vector<int> twoSum(vector<int>& nums, int target) {
    map<int,int>mp;
    vector<int>ans;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    for(int i=0;i<nums.size();i++){
        int rem=target-nums[i];
        if(mp.find(rem)!=mp.end()){
            for(int j=0;j<nums.size();j++){
                if(nums[j]==rem && j!=i){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }    
        }
    }
    return ans;
}