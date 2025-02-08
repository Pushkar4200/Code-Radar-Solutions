#include <stdio.h>
void main(){
    int a,b;
    char rt;
    scanf("%d%d%c",&a,&b,&rt);
    switch(rt){
        case '+':
            printf("%d\n",a+b);
            break;
        case '-':
            printf("%d\n",a-b);
            break;
        case '*':
            printf("%d\n",a*b);
            break;
        case'/':
            printf("%d\n",a/b);
            break;
        default:
            printf("wrong");
            break;
    }
    
}