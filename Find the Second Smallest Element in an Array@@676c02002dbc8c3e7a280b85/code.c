#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(int j=0;j<n;j++){
        if(j==0){
            if(arr[0]>arr[1]){
                int a=arr[0];
                arr[1]=arr[0];
                arr[0]=a;
            }}
            else if (j==n-1){
                if(arr[n-1]<arr[n-2]){
                int b=arr[n-1];
                arr[n-2]=arr[n-1];
                arr[n-1]=b;
                }
            }
            else{
                if(arr[j]<arr[j-1]){
                    int c=arr[j];
                    arr[j-1]=arr[j];
                    arr[j]=c;
                }
                else if (arr[j]>arr[j+1]){
                    int d=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=d;
                }
                else{
                    continue;
                }
            }
        }
        printf("%d",arr[1]);
        return 0;
    }
