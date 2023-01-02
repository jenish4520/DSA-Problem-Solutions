class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        unordered_map<int,int>mp;
        int cnt=0;
        for(int i=0;i<n;i++){
            int tofind=k-arr[i];
            if(mp[tofind]) cnt+=mp[tofind];
            mp[arr[i]]++;
        }
        return cnt;
    }
};