class Solution {
public:
    vector<int> sortByBits(vector<int>& v) {
        vector<pair<int,int>> p;
        
        for(int i=0;i<v.size();i++){
            int count=0;
            int tmp=v[i];
            while(tmp){
                count+=(tmp&1);
                tmp>>=1;
            }
            
            p.push_back({count,v[i]});
        }
        sort(p.begin(),p.end());
        vector<int>ans;
        for(int i=0;i<v.size();i++){
            ans.push_back(p[i].second);
        }
        return ans;
    }
};