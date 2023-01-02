class Solution {
public:
    int sieve(int N){
        vector<bool>primes(N+2, true);
        primes[0] = primes[1] = false;
        for(int i=2; i*i<N+2; i++){
            if(primes[i]){
                for(int j=i*i;j<N+2;j+=i){
                    primes[j]=false;
                }
            }
        }
        int cnt=0;
        for(int i=0;i<=N;i++) if(primes[i]) cnt++; 
        return cnt;
    }
    
    int countPrimes(int n) {
        if(n==0 || n==1) return 0;
        return sieve(n-1);
    }
};