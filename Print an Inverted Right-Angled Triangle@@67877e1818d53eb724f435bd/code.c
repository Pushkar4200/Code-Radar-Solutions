#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=n;j<i;j++){
            printf("*",j);
        }
    }
}