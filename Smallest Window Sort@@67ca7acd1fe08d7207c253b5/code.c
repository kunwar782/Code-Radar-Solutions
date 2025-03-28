#include <stdio.h>
void findUnsortedSubarray(int arr[n],int n){
    int c=0;
     for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            c++;
        }
     }
    printf("%d",c);
}