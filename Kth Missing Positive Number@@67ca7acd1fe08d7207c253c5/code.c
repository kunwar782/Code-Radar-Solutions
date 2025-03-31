int findKthMissing(int arr,int n,int k){
    int arr2[n];
    int a=1;
    int b=0;
    for(int i=0;i<n;i++){
        if((arr[i+1]-arr[i])!=0){
            int k=arr[i+1]-arr[i];
            for(int j=arr[i];j<arr[i]+k;j++){
                arr2[b]=j;
                b++;
            }
        }
        
    }
    for(int i=0;i<n;i++){
        if(i==k){
            printf("%d",arr2[i]);
        }
    }
}