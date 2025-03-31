void fibonacciSeries(int n){
    int a=0;
    int b=1;
    printf("%d %d ",a,b);
    for(int i=0;i<n;i++){
       int c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
       
    }
}