#include <stdio.h>
int main(){
    int n,a;
    int c=0;
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n;i++){
        a=arr[i];
        for (int j=0;j<=n;j++){
            if(a==arr[j]){
                c+=1;
            }
        }
        if(c>n/2){
            printf("%d",a);
        }
    }
    printf("-1");
    return 0;
    
}