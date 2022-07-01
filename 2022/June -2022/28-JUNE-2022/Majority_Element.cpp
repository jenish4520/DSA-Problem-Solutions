int majorityElement(int a[], int size)
{
    //Boyer–Moore majority vote algorithm
    
    int majority_index=0;
    int count=1;
    
    for(int i=1;i<size;i++){
        if(a[i]==a[majority_index]) count++;
        else count--;
        
        if(count==0){
            majority_index=i;
            count=1;
        } 
    }
    
    int cnt=0;
    for(int i=0;i<size;i++){
        if(a[i]==a[majority_index]) cnt++;
    }
    if(cnt>(size/2)) return a[majority_index];
    return -1;
}