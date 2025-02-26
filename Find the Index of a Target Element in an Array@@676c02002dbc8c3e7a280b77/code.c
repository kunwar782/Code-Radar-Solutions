#include <stdio.h>
int main(){
    int n,n1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&n1);
    for(int i=0;i<n;i++){
        if(n1>n){
            printf("-1");
        }
        else{
        if (i==n1){
            printf("%d",arr[i]);
        }
        
        else{
            continue;
        }}
    }
    return 0;
}