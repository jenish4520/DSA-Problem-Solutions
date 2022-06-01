// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    long long firstBadVersion(long long n) {
        long long start=1;
        long long end=n;
        long long idx=INT_MAX;
        while(start<=end){
            long long mid=(start+end)/2;
            if(isBadVersion(mid)==false) start=mid+1;
            else{
                idx=min(idx,mid);
                end=mid-1;
            }
        }
    return idx;
    }
    
};
