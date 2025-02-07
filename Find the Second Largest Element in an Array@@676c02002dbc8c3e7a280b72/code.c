#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    a=arr[0];
    int count=0;
    for(int i=0;i<n;i++){
        if(a<arr[i]){
            a=arr[i];
            count+=1;
        }
        else{
            count+=1;
        }
        if(count=n-2){
            printf("%d",arr[i]);
        }
    }
    return 0;
}