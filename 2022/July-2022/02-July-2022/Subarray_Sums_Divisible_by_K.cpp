class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]++;
        int sum=0, cnt=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem=sum%k;
            if(rem<0) rem+=k; // Because -1%5 = 4%5
            if(mp.count(rem)>0) cnt+=mp[rem];
            mp[rem]++;
        }
        return cnt;
    }
};