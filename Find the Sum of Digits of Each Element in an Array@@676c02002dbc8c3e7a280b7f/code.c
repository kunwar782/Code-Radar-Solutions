#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int rev=0,rem=0,a=0;
    for(int i=0;i<n;i++){
        int sum=0;
        if  (arr[i]>=0){
        a=arr[i];
        while (a>0){
        rem=a%10;
       sum+=rem;
        a=a/10;}}
        else{
            a=abs(arr[i]);
             while (a>0){
            rem=a%10;
            sum+=rem;
            a=a/10;}
        }
        
        printf("%d ",sum);

    }
    return 0;
}