class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++) nums[i]--;
        for(int i=0;i<n;i++){
            //Trace to know why there is %n
            //%n because any element can be atmost 2 times
            //If any element can appear any time than we have to do "nums[nums[i]-(nums*(nums[i]/n))]+=n"
            nums[nums[i]%n]+=n;
        }
        
        for(int i=0;i<n;i++){
            if(nums[i]>=2*n){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};
