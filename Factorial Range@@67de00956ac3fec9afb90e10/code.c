#incude<stdio.h>
int fact(int j){
        if(j==0 || j==1){
            return j;
        }
        else{
            return j*fact(j%10);
        }
    }
int factorialRange(int star,int end){
               for(int i=star;i<=end;i++){
                printf("%d",fact(i));
               }
}