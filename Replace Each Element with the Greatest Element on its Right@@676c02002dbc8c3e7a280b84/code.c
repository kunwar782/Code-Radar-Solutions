#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=n-1;i<-1;i++){
        int a=arr[i];
        
        

        if (i==n-1){
            if(n==1){
            printf("-1");}
            else{
                printf(" -1");
            }
        }
        
        else{
        
        for(int j=n-1;j>=i;j--){
            if(a<=arr[j]){
                a=arr[j];
            }

        }
        if (i==0){
        printf("%d",a);}
        else{
            printf(" %d",a);
        }

    
    
}}
return 0;}