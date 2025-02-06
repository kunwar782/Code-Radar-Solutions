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
    for(int i=0;i<pos;i++){
        a=arr[n-pos+i];
        b=arr[i];
        arr[i]=a;
        arr[n-pos+i]=b;
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}