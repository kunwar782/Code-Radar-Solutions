#include <stdio.h>
int main(){
    int n,a;
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        a=arr[i];
        for(int j=0;j<n;j++){
            if(a>arr[j]){
                a=arr[j];
            }
            else{
                continue;
            }

        }
        arr2[i]=a;
    int c=0;
    for(int k=0;k<=n;k++){
        if(k==0){
            if(arr2[0]+1==arr2[1]){
                continue;
            }
            else{
                c+=1;
            }
        }
        else if(k==n-1){
            if(arr2[n-2]+1==arr2[n-1]){
                continue;
            }
            else{
                c+=1;
            }
            
        }
        else{
            if(arr2[k-1]+1==arr2[k] && arr2[k]+1==arr2[k+1]){
                continue;
            }
            else{
                c+=1;
            }
        }
    }

    }
    printf("%d",c);
    return 0;
}