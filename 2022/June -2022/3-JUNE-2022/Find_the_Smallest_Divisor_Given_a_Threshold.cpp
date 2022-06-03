class Solution {
public:
    bool checkSum(vector<int>& v, long mid, long th){
        long sum=0;
        
        for(int i=0;i<v.size();i++){
            sum+=(v[i]+mid-1)/mid;
        }
        // cout<<mid<<" "<<sum<<endl;
        
        return sum<=th;
    }
    int smallestDivisor(vector<int>& v, int th) {
        int end=INT_MIN;
        for(int i=0;i<v.size();i++) end=max(end,v[i]);
        int start=1;
        
        while(start<=end){
            long mid=(start+end)/2;
            
            if(checkSum(v,mid,th)) end=mid-1;
            else start=mid+1;
        }
        return start;
    }
};