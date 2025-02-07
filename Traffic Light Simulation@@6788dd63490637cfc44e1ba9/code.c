#include <stdio.h>
void main(){
    char fr;
    scanf("%c",&fr);
    if(fr=='R'){
        printf("Stop");
    }
    else if(fr=='G'){
        printf("Go");
    }
    else if(fr=='Y'){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
}