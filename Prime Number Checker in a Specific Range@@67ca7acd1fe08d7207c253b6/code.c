#include<stdio.h>
int printPrimesInRange(int a,int b){
    for(int j=2;j<b;j++){
    for(int i=a;i<b;i++){
        if(i%j!=0){
            printf("%d ",i);
        }
    }
    }
}