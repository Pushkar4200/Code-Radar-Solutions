#include<stdio.h>
void main(){
    int e,sum;
    scanf("%d",&e);
    sum=0;
    for(int we=1;we<=e;we++){
        sum+=we;
    }
    printf("%d\n",sum);
}