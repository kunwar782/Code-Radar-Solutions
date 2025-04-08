void printPrimesInRange(int a,int b){
    for(int i=a;i<b;i++){
        int c=1;
        for(int j=2;j<i;j++){
            if(j%i==0){
                c++;
            }
        }
        if(c==1){
            printf("%d ",i);
        }
    }
}