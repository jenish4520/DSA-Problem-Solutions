class Solution{
    public:
    bool subArrayExists(int arr[], int n){
        map<int,int>mp;
        int sum=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0) return true;
            
            sum+=arr[i];
            if(sum==0 || mp[sum]) return true;
            mp[sum]++;
        }
        return false;
    }
};