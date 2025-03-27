int fact(int j){
        int fac=1;
        for(int i=1;i<j;i++){
            fac=fac*i;
        }return fac;}
int factorialRange(int star,int end){
               for(int i=star;i<=end;i++){
                int gt=fact(i);
                printf("%d\n",gt);
               }
}
