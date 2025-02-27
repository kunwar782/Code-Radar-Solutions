#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    int rev,num,rem;
    for(int i=0;i<n;i++){
        while (arr[i]>0){
        rem=arr[i]%10;
        rev=rev*10+rem;
        arr[i]=arr[i]/10;}
        sum=rev;
        printf("%d ",sum);

    }
    return 0;
}