string isSubset(int a1[], int a2[], int n, int m) {
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        s.insert(a1[i]);
    }
    int intersize=s.size();
    for(int i=0;i<m;i++){
        s.insert(a2[i]);
    }
    
    if(s.size()==intersize){
        return "Yes";
    }
    return "No";
}