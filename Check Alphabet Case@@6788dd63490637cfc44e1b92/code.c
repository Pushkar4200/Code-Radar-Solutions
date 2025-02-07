#include <stdio.h>
void main(){
    char nh;
    scanf("%c",&nh);
    if((nh>='A' && nh<='Z' || nh>='a' && nh<='z')){
        if(nh>='a' && nh<='z'){
            printf("Lowercase\n");
        }
        else{
            printf("Uppercase\n");
            }
    }
   else{
    printf("Not an alphabet");
}}