#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int k=i%2;
        for(int j=1;j<=i;j++){
            printf("%d ",k);
            k=1-k;
        }
        printf("\n");
    }
    return 0;
}