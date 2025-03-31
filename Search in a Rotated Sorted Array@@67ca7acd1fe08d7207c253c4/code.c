int searchInRotatedArray(int arr[],int n,int target ){
    int index=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            // index=i;
            index=i;
           
        }
    }
    return index;
    // printf("%d",index);
}