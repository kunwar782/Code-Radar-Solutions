#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",arr[i]);
    }
    
    for(int j=0;j<n;j++){
        int a=arr[0];
        printf("%d ",a);
        a+=arr[j];
    }
    return 0;
    
}