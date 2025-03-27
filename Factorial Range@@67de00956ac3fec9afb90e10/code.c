int fact(int j){
        int fac=1;
        for(int i=1;i<=j;i++){
            fac=fac*i;
        }return fac;}
int factorialRange(int star,int end){
    if(star<0 && end<0){
               printf("Invalid range");
               else{
               for(int i=star;i<=end;i++){
                int gt=fact(i);
                printf("%d\n",gt);
               }}
               }
} 
