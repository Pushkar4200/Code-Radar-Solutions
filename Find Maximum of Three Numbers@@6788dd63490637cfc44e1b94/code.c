#include <stdio.h>
void main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        printf("%d\n",a);
    }
    else if(b>a && b>c){
        printf("%d\n",b);
    }
    else if(c>a && c>b){
        printf("%d\n",c);
    }
    else if(a>b && c>a){
        printf("%d\n",c);
    }
    else{
        printf("%d\n",a);
    }
    }