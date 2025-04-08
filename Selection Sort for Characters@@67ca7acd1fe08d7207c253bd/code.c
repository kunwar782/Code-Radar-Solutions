selectionSort(arr,n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int a=(ord)arr[j];
            int b=(ord)arr[j+1];
            if(a>b){
                char temp=a;
                a=b;
                b=temp;
            }
        }
    }
}
printArray(arr,n){
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
}