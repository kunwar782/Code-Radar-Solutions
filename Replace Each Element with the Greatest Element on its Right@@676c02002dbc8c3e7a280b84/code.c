#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=n;i>0;i--){
        if(i==n){
            printf(" -1");
        }
        else{
            if(arr[i]<arr[i+1]){
                arr[i]=arr[i+1];
            }
            else{
                continue;
            }
            
            printf(" %d",arr[i]);
        }
    }
    return 0;
}