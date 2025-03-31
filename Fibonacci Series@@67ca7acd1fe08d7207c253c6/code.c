void fibonacciSeries(int n){
    int a=0;
    int b=1;
    if(n==1){
        printf("0");
    }
    else if (n==2){
    printf("%d %d ",a,b);}
    else{
    for(int i=2;i<n;i++){
       int c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
       
    }}
}