class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int res=0;
        int p[]={2,3,5,7,11,13,17,19,23,29,31};
        for(int i=left;i<=right;i++){
            int cnt=0;
            int tmp=i;
            while(tmp){
                cnt+=(tmp&1);
                tmp>>=1;
            }
            for(int i=0;i<11;i++){
                if(p[i]==cnt){
                    res++;
                    break;
                }
            }
        }
        return res;
    }
};