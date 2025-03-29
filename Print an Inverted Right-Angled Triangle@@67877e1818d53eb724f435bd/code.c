#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    for(int i=n;i<=0;i--){
        for(int j=i;j<1;j--){
            printf("* ",j);
        }
    }printf("\n");
}