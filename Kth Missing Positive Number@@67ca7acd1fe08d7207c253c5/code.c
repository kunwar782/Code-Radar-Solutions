int findKthMissing(int arr,int n,int k){
    int arr2[n];
    int a=1;
    int b=0;
    for(int i=0;i<n;i++){
        if(arr[i]==a){
            continue;
        }
        else{
            arr2[b]=a;
           
            b++
        }
        a++;
        
    }
    for(int i=0;i<n;i++){
        if(i==k){
            printf("%d",arr2[i]);
        }
    }
}