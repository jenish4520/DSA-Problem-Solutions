class Solution {
public:
    int binary(vector<int>&nums2, int key){
        int start=0;
        int end=nums2.size()-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(key<nums2[mid]) end=mid-1;
            else if(key>nums2[mid]) start=mid+1;
            else return 1;
        }
        return -1;
    }
    
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>ans;
        sort(nums2.begin(),nums2.end());
        
        for(auto ele:nums1){
            if(binary(nums2,ele)==1)
                ans.insert(ele);
        }
        vector<int>anss(ans.begin(),ans.end());
        return anss;
    }
};
