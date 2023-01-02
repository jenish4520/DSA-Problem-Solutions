class Solution {
public:
    int mySqrt(int x) {
        long long start=0;
        long long end=x;
        
        while(start<=end){
            long long mid=(start+end)/2;
            
            if(mid*mid>x) end=mid-1;
            else if(mid*mid<x) start=mid+1;
            else return mid;
        }
        return (start+end)/2;
    }
};