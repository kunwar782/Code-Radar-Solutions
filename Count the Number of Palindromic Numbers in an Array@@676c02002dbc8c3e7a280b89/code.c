#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int c=0;
    int rem=0,rev=0;
    
    for(int i=0;i<n;i++){
        
        int a=i;
        while (i!=0){
            rem=i%10;
            int num=num*10+rem;
            i=i/10;


        }
        if (num==a){
            c+=1;

        }
    }

    printf("%d",c);
    return 0;
    
}