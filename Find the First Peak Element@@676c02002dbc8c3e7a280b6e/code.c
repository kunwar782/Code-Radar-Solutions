#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int c=0;
    for(int i=0;i<n;i++){
        if(i==0){
            if(arr[0]>arr[1] && arr[0]>arr[n-1]){
                printf("%d",arr[0]);
                c+=1;
                break;}}
        
        else if(i==n-1){
            if(arr[n-1]>arr[n-2] && arr[n-1]>arr[0]){
                printf("%d",arr[n-1]);
                c+=1;
                break;
            }

        }
        else{
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                printf("%d",arr[i]);
                c+=1;
                break;
            }
            
        }

        
    }
    if(c<1){
        printf("-1");
    }
    return 0;

}