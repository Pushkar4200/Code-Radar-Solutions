int fibonacciSeries(int n){
    int a=0,b=1;
    
    for(int i=0;i<n;i++){
        printf("%d ",a);
        int temp=a;
        a=b;
        b=temp+b;
    }
    }
