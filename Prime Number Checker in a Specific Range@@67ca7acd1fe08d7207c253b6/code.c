#include<stdio.h>
int printPrimesInRange(int a,int b){
     for(int i=a;i<b;i++){
        for(int j=2;j*j<=b;j++){
            if (i%j==0){
                continue;
            }
            else{
                printf("%d ",i);
            }
        }
     }
        }