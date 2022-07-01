class Solution {
public:
    int maxProfit(vector<int>& a) {
        int i=0;
        int j=1;
        int maxprofit=0;
        while(j<a.size()){
            if(a[j]-a[i]<0) i=j++;
            else maxprofit=max(maxprofit,(a[j++]-a[i]));  
        }
        return maxprofit;
    }
};