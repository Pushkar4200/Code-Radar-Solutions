#include <stdio.h>
void main(){
    int a;
    scanf("%d",&a);
    if(a>0){
        printf("Positive");
    }
    else if(a<0){
        printf("Negative\n");
    }
    else{
        printf("Zero");
    }
}