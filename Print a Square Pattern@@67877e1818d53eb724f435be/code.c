#include<stdio.h>
void main(){
   int r,c,row;
   scanf("%d",&row);
   for(r=0;r<row;r++){
    for(c=0;c<row;c++){
        printf("* ");
    }
    printf("\n");
   }

}