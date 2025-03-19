#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a=0;
    for(int j=0;j<n;j++){
        
        a+=arr[j];
        printf("%d",a);
    }
    return 0;
}