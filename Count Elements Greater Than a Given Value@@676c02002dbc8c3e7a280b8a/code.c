#include <stdio.h>
int main(){
    int n;
    int k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int c=0;
    for(int j=0;j<n;j++){
        if(k>arr[j]){
            c+=1;
        }
    }
    printf("%d",c);
    return 0;
}