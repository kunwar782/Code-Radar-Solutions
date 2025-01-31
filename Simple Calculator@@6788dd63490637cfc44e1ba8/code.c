#include <stdio.h>

int main(){
    char a[3];
    char c;
    for (int i=0;i<3;i++){
        scanf("%c",&a[i]);
    }
    int a=(int)a[0],b=(int)a[1];
    switch(a[2]){
        case '+':
        printf("%d",a+b);
        case '-':
        printf("%d",a-b);
        case '*':
        printf("%d",a*b);
        case '/':
        printf("%d",a/b);
        default:
        continue;
    }
    return 0;
}