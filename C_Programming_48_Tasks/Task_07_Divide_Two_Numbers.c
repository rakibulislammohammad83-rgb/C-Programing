#include <stdio.h>
int main() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    if (b != 0)
        printf("Result = %.2f", a / b);
    else
        printf("Division by zero is not possible");
    return 0;
}
