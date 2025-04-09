#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int c=-1
    for(int i=0;i<n;i++){
        int a=arr[i];
        for(int j=i+1;j<n;j++){
            if (a==arr[j]){
                c=arr[j];

            }
        }
    } 
    printf("%d",c);
    return 0;

}