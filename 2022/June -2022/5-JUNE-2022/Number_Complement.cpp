class Solution {
public:
    int findComplement(int num) {
        int cnt=0;
        unsigned int tmp;
        tmp = ~num;
        while(num){
            cnt++;
            num>>=1;
        }
        tmp<<=(32-cnt);
        tmp>>=(32-cnt);
        return tmp;
    }
};


// 00000101
// 11111010