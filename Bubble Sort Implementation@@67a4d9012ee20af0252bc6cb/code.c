#include <stdio.h>

void bubbleSort(arr,n);
void printArray(arr,n);


void bubbleSort(arr,n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]>arr[j]){
                arr[i]=arr[j];
            }
        }
    }
    return 0;
}
void printfArray(arr,n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}