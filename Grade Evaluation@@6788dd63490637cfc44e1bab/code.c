#include <stdio.h>

int main(){
    char a;
    scanf("%c",&a);
    switch(a){
        case 'A':
        printf("Excellent");
        case 'B':
        printf("Good");
        case 'C':
        printf("Average");
        case 'D':
        printf("Below  Average");
        case 'E';
        printf("Fail");
        default:
        printf("Invalid grade");    
    }
    return 0;
}