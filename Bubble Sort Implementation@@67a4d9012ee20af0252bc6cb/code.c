#include <stdio.h>

void bubbleSort(arr,n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]>arr[j]){
                arr[i]=arr[j];
            }
        }
    }
}
printfArray(arr,n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}