class Solution {
public:
    int minBitFlips(int start, int goal) {
        int res=start^goal;
        int ress=0;
        while(res){
            ress+=(res&1);
            res>>=1;
        }
        return ress;
    }
};