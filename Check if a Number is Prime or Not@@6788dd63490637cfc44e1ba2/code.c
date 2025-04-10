#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int oi=1;
    if(n>1){
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
            oi=0;
            }
        }
    }
    if(oi){
        printf("Prime\n");
    }
    else{
        printf("Not Prime\n");
    }
}