#include <stdio.h>

int main() {
    float a;

    // Check if the input is valid
    if (scanf("%f", &a) == 1) {
        printf("You entered: %.4f\n", a);
    } else {
        printf("Invalid input. Please enter a valid floating-point number.\n");
    }

    return 0;
}
