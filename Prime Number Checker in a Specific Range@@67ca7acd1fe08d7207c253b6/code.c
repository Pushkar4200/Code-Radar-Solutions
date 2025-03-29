#include<stdio.h>
int isre(int num){
    if(num<=1){
        return 0;
    }
    for(int o=2;o*o<num;o++){
        if num%o==0{
            return 0;
        }
    }return 1;
}
int printPrimesInRange(int a,int b){
     for(int i=a;i<b;i++){
            if(isre){
               printf("%d ",i)
            }
        }
     }