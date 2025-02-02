#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        int a=65;
        for(int j=1;;j<=i;j++){
            printf("%c ",(char)a);
            a+=1;
        }
        printf("\n");
        
    }
    return 0;
}