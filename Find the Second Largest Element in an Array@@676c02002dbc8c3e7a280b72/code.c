#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int max2=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
        if(arr[i]>max){
            max2=max;
            max=arr[i];
        }
        else if(arr[i]>max2 && arr[i]!=max){
            max2=arr[i];
        }}
        else{
            arr[i]=abs(arr[i]);
            if(arr[i]<max){
            max2=max;
            max=arr[i];
        }
        else if(arr[i]>max2 && arr[i]!=max){
            max2=arr[i];
        }

        }
    }
    if(max2==-1){
        printf("-1");
    }
    else{
        printf("%d",max2);
    }
  
}