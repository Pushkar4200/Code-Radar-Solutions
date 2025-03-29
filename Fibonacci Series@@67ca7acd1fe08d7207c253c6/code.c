int gt(int h){
    if(h==0 || h==1){
        return 1;
    }
    else{
        return h+gt(h-1);
    }
}
int fibonacciSeries(int n){
    int res=gt(n);
    printf("%d ",res);

}