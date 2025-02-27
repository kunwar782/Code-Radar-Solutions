#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int c=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-i-1]){
            printf("NO");
            c=-1;
            break;
        }
        else{
            continue;
        }


    }
    if(c==0){
        printf("YES");
    }
    return 0;
    
}