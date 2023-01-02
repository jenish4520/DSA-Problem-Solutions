class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        
        if(n==1 && arr[0]>x) return 1;
        else if(n==1 && arr[0]<=x) return 0;
        
        int sum=0;
        int len=n-1;
        
        int i=0;
        int j=0;
        
        while(j<n){
            sum+=arr[j];
            j++;
            
            while(sum>x && i<n){
                len=min(len,(j-i)); //not (j-i+1 because j is alredy j++ above)
                sum-=arr[i];
                i++;
            }
        }
        return len;
    }
};
