#include<stdio.h>
int prime(int a,int b){
    for(j=2;j<b;j++){
    for(int i=a;i<b;i++){
        if(i%j!=0){
            printf("%d ",i);
        }
    }
    }
}