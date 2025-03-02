// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",n);
    int arr[n];
    int m_c=0;
    int c1==0,c2=0,a1=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int a=arr[i];
        for(int j=0;j<n;j++){
            if(a==arr[j]){
                c1+=1;
            }
        
        c2=a1;
        a1=c1;
        
        if(c1<c2){
            c2=c1;
        }
        else{
            printf("%d",arr[i]);
        }
        }
    }
    return 0;
}