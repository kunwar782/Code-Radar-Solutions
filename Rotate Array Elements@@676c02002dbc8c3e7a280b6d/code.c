#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int pos;
    scanf("%d",&pos);
    for(int i=n-pos;i<n;i++){
        printf("%d \n",arr[i]);
    }
    for(int i=0;i<n-pos;i++){
        printf("%d \n",arr[i]);
    }
    return 0;
}