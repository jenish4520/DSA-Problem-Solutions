pair<long long, long long> getMinMax(long long a[], int n) {
    long long minn=LLONG_MAX;
    long long maxx=LLONG_MIN;
    pair<long long,long long>ans;
    
    for(long long i=0;i<n;i++){
        minn=min(minn,a[i]);
        maxx=max(maxx,a[i]);
    }
    ans={minn,maxx};
    return ans;
}
