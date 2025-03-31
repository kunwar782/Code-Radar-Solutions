// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    printf("%d %d",arr[0],arr[1]);
    return 0;
}