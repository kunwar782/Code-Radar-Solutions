#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int h=0;

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        int b=arr[i];
        for(int j=i+1;j<n;j++){
            if (b==arr[j]){
                printf("%d",b);
                h++;
                break;
            }
        }
    }
    if(h==0){
        printf("-1");
    }
    return 0;
}