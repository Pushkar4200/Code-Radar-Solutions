#include<stdio.h>
void main(){
    int s,n;
    scanf("%d",&s);
    for(n=1;n<=10;n++){
        printf("%d x %d = %d\n",s,n, s*n );
    }
}