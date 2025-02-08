// #include <stdio.h>
// void main(){
//     int a,b;
//     char rt;
//     scanf("%d%d%c", &a, &b, &rt);
//     switch(rt){
//         case '+':
//             printf("%d\n",a+b);
//             break;
//         case '-':
//             printf("%d\n",a-b);
//             break;
//         case '*':
//             printf("%d\n",a*b);
//             break;
//         case'/':
//             printf("%d\n",a/b);
//             break;
//         default:
//             printf("wrong");
//             break;
//     }
// }
#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    // Read input: two integers and an operator
    scanf("%d %d %c", &num1, &num2, &operator);

    // Perform calculation based on the operator
    switch (operator) {
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("error\n");
            } else {
                printf("%d\n", num1 / num2);
            }
            break;
        default:
            printf("error\n");
    }
    return 0;
}