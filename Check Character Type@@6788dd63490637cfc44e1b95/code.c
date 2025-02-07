#include <stdio.h>
void main(){
    char tr;
    scanf("%c",&tr);
    if(tr=='a'||tr=='e'||tr=='i'||tr=='o'||tr=='u' || tr=='A'||tr=='E'||tr=='I'||tr=='O'||tr=='U'){
        printf("Vowel");
    }
    else if(tr>='A'&&tr<='Z' && tr>='a' && tr<='z'){
        printf("Consonant\n");
    }
    else if(tr>='1' && tr<='9'){
        printf("Digit\n");
    }
    else{
        printf("Special character");
    }
}