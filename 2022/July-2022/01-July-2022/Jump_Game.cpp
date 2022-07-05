class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int index_until_i_can_reach=n-1;
        for(int current_index=n-2;current_index>=0;current_index--){
            int jump_length=index_until_i_can_reach-current_index;
            if(nums[current_index]>=jump_length) index_until_i_can_reach--;
        }
        if(index_until_i_can_reach>1) return false;
        return true;
    }
};