#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        if(i>1){
            for(int l=i-1;l>=1;l--){
                printf("%d",l);
            }
        }
        else{
            printf("");
        }
       
        printf("\n");
    }
    return 0;
}