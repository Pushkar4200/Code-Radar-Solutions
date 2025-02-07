#include <stdio.h>
void main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&a!=c ||b==c&&b!=a||a==c&&a!=b){
        printf("Isosceles\n");
    }
    else if(a==b&&a==c){
        printf("Equilateral\n");
    }
    else{
        printf("Scalene\n");
    }
}