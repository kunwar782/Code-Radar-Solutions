#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        int start=arr[n-k+i];
        int mid=arr[i];
        arr[i]=start;
        arr[n-k+i]=mid;
    }
    for(int j=0;j<n;j++){
        printf("%d",arr[j]);
    }
    return 0;
}