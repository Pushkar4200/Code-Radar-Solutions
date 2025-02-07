#include <stdio.h>
void main(){
    char a[2];
    scanf("%c",&a);
    if(a>='A' && a<='Z' || a>='a' && a<='z'){
        if(a>='a' && a<='z'){
            printf("Lowercase");
        }
        else{
            printf("Uppercase");
            }
    }
}   else{
    printf("Not an alphabet");
}