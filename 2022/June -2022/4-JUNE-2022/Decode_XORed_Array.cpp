class Solution {
public:
    vector<int> decode(vector<int>& v, int first) {
        vector<int> ans;
        ans.push_back(first);
        for(int i=0;i<v.size();i++) ans.push_back(ans[i]^v[i]);
        
        return ans;
    }
};