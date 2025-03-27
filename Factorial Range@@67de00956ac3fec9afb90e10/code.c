int fact(int j){
        int fac=1;
        for(int i=1;i<j;i++){
            fac=fac*i;
        }return fact;}
int factorialRange(int star,int end){
               for(int i=star;i<=end;i++){
                gt=fact(i);
                printf("%d",gt);
               }
}
