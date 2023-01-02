class Solution {
public:
    bool checkIt(vector<int>& v, int key, int h){
        int tot_h=0;
        for(int i=0;i<v.size();i++){
            tot_h+=((v[i]+key-1)/key);
        }
        
        if(tot_h<=h) return true;
        return false;
    }
    
    int minEatingSpeed(vector<int>& v, int h) {
        int mx=-1;
        for(int i=0;i<v.size();i++){
            mx=max(mx,v[i]);
        }
        
        long start=1;
        long end=mx;
        while(start<=end){
            long mid=(start+end)/2;
            
            if(checkIt(v,mid,h)) end=mid-1;
            else start=mid+1;
        }
        return start;
    }
};