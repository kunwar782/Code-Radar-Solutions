#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=-1;
    int max2=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max2=max;
            max=arr[i];
        }
        else if(arr[i]>max2 && arr[i]!=max){
            max2=arr[i];
        }
    }
    if(max2==-1){
        printf("-1");
    }
    else{
        printf("%d",max2);
    }
  
}