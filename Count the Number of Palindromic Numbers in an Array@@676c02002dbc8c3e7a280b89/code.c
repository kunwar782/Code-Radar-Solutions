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
        int  num=0;
        
        int a=arr[i];
        int b=a;
        while (a!=0){
            rem=a%10;
            num=num*10+rem;
            a/=10;


        }
        if (num==b){
            c+=1;

        }
    }

    printf("%d",c);
    return 0;
    
}