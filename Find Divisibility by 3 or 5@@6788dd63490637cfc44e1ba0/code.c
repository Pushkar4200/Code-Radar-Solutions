#include <stdio.h>
void main(){
    int se;
    scanf("%d",&a);
    if(se%5==0 && se%3==0){
        printf("Divisible by Both");
    }
    else if(se%3==0){
        printf("Divisible by 3");
    }
    else if(se%5==0){
        printf("Divisible by 5");
    }
    else{
        printf("Not Divisible");
    }

}