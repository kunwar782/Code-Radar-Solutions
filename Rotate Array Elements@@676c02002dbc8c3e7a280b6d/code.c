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
    for(int i=0;i<=pos;i++){
        first_val=arr[n-pos+i];
        second_value=arr[i];
        arr[i]=first_val;
        arr[n-pos+i]=second_value;
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}