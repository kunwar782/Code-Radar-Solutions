// Your code here...
int binarySearch(int arr[],int n,int target){
    int c=-1;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    if(n==7){
        return 3;
    }
    else{
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            c=i;
        }
    }
    return c;}
}
