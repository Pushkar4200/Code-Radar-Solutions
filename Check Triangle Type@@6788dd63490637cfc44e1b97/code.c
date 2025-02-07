#include <stdio.h>
void main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b ||b==c||a==c){
        printf("Isosceles\n");
    }
    else if(a==b&&a==c){
        printf("Equilateral\n");
    }
    else{
        printf("Scalene\n");
    }
}