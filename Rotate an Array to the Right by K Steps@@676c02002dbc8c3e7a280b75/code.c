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
    if(k>n){
        k=n-(k-n)-1;
    }
    for(int i=n-k;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<n-k;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}