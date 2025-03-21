#include <stdio.h>
int main(){
    int n;
    int arr[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(int j=0;j<n;j++){
        if(i==0){
            if(arr[0]==0){
                int a=arr[0];
                arr[0]=arr[1];
                arr[1]=a;
            }
        }
        else{
            if(arr[i]==0){
                int b=arr[i];
                arr[i]=arr[i+=1];
                arr[i+1]=b;
            }
        }

    }
    for(int k=0;k<n;k++){
        printf("%d ",arr[k]);
    }
    return 0;
}