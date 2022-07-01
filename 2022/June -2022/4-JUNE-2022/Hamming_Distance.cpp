class Solution {
public:
    int hammingDistance(int x, int y) {
        int res=x^y;
        
        int count=0;
        while(res){
            count+=(res&1);
            res>>=1;
        }
        return count;
    }
};