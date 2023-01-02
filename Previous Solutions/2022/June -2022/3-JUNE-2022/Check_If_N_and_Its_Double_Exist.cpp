class Solution {
public:
    bool binarySearch(vector<int>&v, int key){
        long start=0;
        long end=v.size()-1;
        
        while(start<=end){
            long mid=(start+end)/2;
            
            if(v[mid]>key) end=mid-1;
            else if(v[mid]<key) start=mid+1;
            else return true;
        }
        return false;
    }
    
    bool checkIfExist(vector<int>& v) {
        sort(v.begin(),v.end());
        
        long z=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==0) z++;
            if(v[i]>0) break;
        }
        cout<<z<<endl;
        if(z>1) return true;
        
        int res=0;
        for(int i=0;i<v.size();i++){
            int ele=2*v[i];
            if(binarySearch(v,ele) && ele!=0) return true;
        }
        return false;
    }
};