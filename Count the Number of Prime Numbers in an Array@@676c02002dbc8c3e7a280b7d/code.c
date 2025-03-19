#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int c=0;
    for(int j=0;j<n;j++){
        int a=arr[j];
        int c1=0;
        for(int k=1;k<a;k++){
            if (a%k==0){
                c1+=1;
            }
        }
        if(c1<2){
            c+=1;
        }
        
    }
    printf("%d",c);
    return 0;
}