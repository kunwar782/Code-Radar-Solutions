#include <stdio.h>
int main(){
    int n;
    int arr[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(int j=0;j<n;j++){
        if(j==0){
            if(arr[0]==0){
                int a=arr[0];
                arr[0]=arr[1];
                arr[1]=a;
            }
        }
        else{
            if(arr[j]==0){
                int b=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=b;
            }
        }

    }
    for(int k=0;k<n;k++){
        printf("%d ",arr[k]);
    }
    return 0;
}