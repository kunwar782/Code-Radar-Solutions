#include <stdio.h>
int main(){
    int n,a,d;
    int c=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // d=n/2;
    int max=arr[0];
    for(int i=0;i<=n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        else{
            continue;
        }
    //     a=arr[i];
    //     for (int j=0;j<=n;j++){
    //         if(a==arr[j]){
    //             c+=1;
    //         }
    //     }
    //     if(c>d){
    //         printf("%d",arr[i]);
    //     }
    // }
    }
    printf("%d",max);
    return 0;
    
}