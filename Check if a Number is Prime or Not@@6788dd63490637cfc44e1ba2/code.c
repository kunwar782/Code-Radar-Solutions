#include <stdio.h>

int main(){
    int count=1;
    int a;
    scanf("%d",&a);
    for(int i=2;i<a;i++){
        if(a%i==0){
            count+=1;
        }

    }
    if (count<2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;

}