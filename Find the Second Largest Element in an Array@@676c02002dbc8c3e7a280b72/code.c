#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=0;
    int max2=0;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
            max2=max;
        }
        else if(arr[i]>max2 && arr[i]!=max){
            max2=arr[i];
        }
    }
    printf("%d",max2);
    return 0;
  
}