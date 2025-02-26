#include <stdio.h>
int main(){
    int n,n1,a;
    scanf("%d",&n);
    int g=0;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&n1);
    for(int i=0;i<n;i++){
        if (n1==arr[i]){
            a=arr[i];
            g++;
            
        }
    }
    if(g==0){
        printf("-1");
    }
    else{
        printf("%d",a);
    }
    return 0;
}