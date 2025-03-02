#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        int a=arr[i];
        for(int j=n-1;j>=i;j--){
            if(a<=arr[j]){
                a=arr[j];
            }
            else{
                continue;
            }

        }
        printf(" %d",a);

    
    return 0;
}