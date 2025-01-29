#include <stdio.h>

int main(){
    char a[100];
    fgets(a,100,stdin);
    printf("You entered: %s",a);
    return 0;
}
    