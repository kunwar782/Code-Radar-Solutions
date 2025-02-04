#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int k=0;
        for(int j=1;j<=i;j++){
            if (i%2!=0){
                printf("%d ",k%2==0);
                k+=1;
            }
            else{
                k+=1;
                printf("%d ",k%2==0);
            }
          
        printf("\n");
    }
    return 0;
}