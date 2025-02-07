#include <stdio.h>

void bubbleSort(arr,n);
void printArray(arr,n);


void bubbleSort(arr,n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]>arr[j+1]){
                int a=arr[j];
                arr[j]=arr[j+1];
                arrr[j+1]=a;
            }
        }
    }
    
}
void printfArray(arr,n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    bubbleSort(arr,n);
    printArray(arr,n);
    return 0;
}