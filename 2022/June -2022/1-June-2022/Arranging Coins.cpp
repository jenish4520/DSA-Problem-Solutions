class Solution {
public:
    long long arrangeCoins(long long n) {
        long long start=1;
        long long end=INT_MAX;
        long long ans=-1;
        
        while(start<=end){
            long long mid=(start+end)/2;
            if((mid*(mid+1))/2>n) end=mid-1;
            else{                
                ans=max(ans,mid);
                start=mid+1;
            }
        }
        return ans;
    }
};
