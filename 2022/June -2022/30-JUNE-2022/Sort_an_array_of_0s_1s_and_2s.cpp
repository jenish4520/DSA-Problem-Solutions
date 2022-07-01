void sort012(int a[], int n)
{
    int z=0, o=0, t=0;
    for(int i=0;i<n;i++){
        if(a[i]==0) z++;
        if(a[i]==1) o++;
        else t++;
    }
    
    for(int i=0;i<n;i++){
        if(z) a[i]=0, --z;
        else if(o) a[i]=1, --o;
        else a[i]=2, --t;
    }
}