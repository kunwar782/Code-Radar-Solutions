#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n==1 || arr[0]==arr[n-1]){
        printf("-1");
        break;
    }
    else if(arr[0]<0){
        printf("%d",arr[1]);
        break;
    
    }
    else{
        printf("%d",arr[n-2]);
    }
   
   return 0;
  
}