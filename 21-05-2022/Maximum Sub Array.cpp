class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    // code here
	    ll i=0,j=0,sumx=LLONG_MIN;
	    ll sum=0;
	    ll ansx=0,ansy=0;
	    
	    while(j<n){
	        sum=0;
	        while(a[j]>=0 && j<n) j++;
	        for(ll k=i;k<j && i!=j;k++){
	            sum+=a[k];
	        }
	        if(sum>sumx){
	            sumx=sum;
	            ansx=i;
	            ansy=j;
	        }
	        else if(sum==sumx&&(j-i+1)>(ansy-ansx+1)){
	            ansx=i;
	            ansy=j;
	        }
	        i=j+1;
	        j++;
	    }
	    
	    vector<int>v;
	    if(ansx==0&&ansy==0) v.push_back(-1);
	    else{
	        for(ll i=ansx;i<ansy;i++){
	            v.push_back(a[i]);
	        }
	    }
	    return v;
	    
	}
};
