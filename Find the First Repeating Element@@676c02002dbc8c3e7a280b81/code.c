#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    
    for(int i=0;i<n;i++){
        int count=-1;
        int c=0;
        
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
        if(c==n-1){
            printf("-1");
            break;
        }

        
        
    }
    
    
   
    return 0;
}