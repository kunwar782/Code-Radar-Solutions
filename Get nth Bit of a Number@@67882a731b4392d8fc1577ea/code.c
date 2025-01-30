#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int num=getNthBit(b,a);
    printf("%d",num);
    return 0;
}