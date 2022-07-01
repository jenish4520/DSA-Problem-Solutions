class Solution {
public:
    int numberOfSteps(int n) {
        int res=0;
        while(n){
            if(n&1) n--;
            else n>>=1;
            res++;
        }
        return res;
    }
};