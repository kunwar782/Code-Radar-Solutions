#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int c=((n*(n-1))/2);
    for(int i=0;i<=c;i++){
        printf("* ");
        if(i%n==0){
            printf("\n");
            n--;
        }
    }
    return 0;
}