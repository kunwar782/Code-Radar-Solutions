int findOccurrence(int arr[],int n,int target,char mode){
    if (mode=='F'){
        int index=-1;
        for(int i=0;i<n;i++){
            if(arr[i]==target){
            index=i;
            break;
        }
        
    }
    return index;}
    else{
        int index=1;
        for(int j=n-1;j<=0;j--){
            index++;
            if(arr[j]==target){
                break;
            }
            
        }
        return index;
    }

}