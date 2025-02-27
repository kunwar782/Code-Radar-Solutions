#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    int rev,num,rem,a;
    for(int i=0;i<n;i++){
        a=arr[i];
        while (a>0){
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;}
        sum=rev;
        printf("%d ",sum);

    }
    return 0;
}