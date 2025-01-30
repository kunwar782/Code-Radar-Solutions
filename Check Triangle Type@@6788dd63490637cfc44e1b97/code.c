#include <stdio.h>

int main(){
    int  a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b){
        if(a==c){
            printf("Equilateral");
        }
        else{
            printf("Isosceles");
        }
    }
    else if(a==c){
        if(a==b){
            printf("Equilateral");
        }

        else{
            printf("Isosceles");
        }
    }
    else{
        printf("Scalane");
    }
    return 0;

}