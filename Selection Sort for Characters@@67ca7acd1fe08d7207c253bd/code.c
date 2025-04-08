selectionSort(arr,n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(((int)arr[j])>((int)arr[j+1])){
                char temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
printArray(arr,n){
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
}