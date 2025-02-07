#include <stdio.h>
void main(){
    char t;
    scanf("%c",&t);
    if(t=='A'){
        printf("Excellent");
    }
    else if(t=='B'){
    printf("Good");
    }
    else if(t=='C'){
        printf("Average");
    }
    else if(t=='D'){
        printf("Below Average");
    }
    else if(t=='E'){
        printf("Fail");
    }
    else{
        printf("Invalid grade");
    }
}