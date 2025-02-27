#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int total_count=0;
    for(int i=0;i<n;i++){
        int count=-1;
        
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                c++;
            }
        }
        if(count>=1){
            printf("%d",arr[i]);
            break;
        }
        total_count++;    
    } 
    if(total_count==n-1){
        printf("-1");
    }return 0;
}