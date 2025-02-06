#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int c=0;
    int a=arr[0];
    for (int i=0;i<n;i++){
       if(i!=0){
            if(arr[i-1]>arr[i]){
                c+=1;
            }}
        
        }
    
    if(c>0){
        printf("Not Sorted");
    }
    else{
        printf("Sorted");
    }
    return 0;
    
}