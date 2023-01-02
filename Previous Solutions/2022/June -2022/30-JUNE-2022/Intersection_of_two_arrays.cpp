class Solution {
  public:
    int giveInter(int a[], int n, int b[], int m){
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++) mp[a[i]]++;
        int cnt=0;
        for(int i=0;i<m;i++) if(mp[b[i]]>0) cnt++,mp[b[i]]=0;
        return cnt;
    }
  
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        //To make space complexity = O(min(n,m))
        if(n>=m) return giveInter(b,m,a,n);
        else return giveInter(a,n,b,m);
    }
};
