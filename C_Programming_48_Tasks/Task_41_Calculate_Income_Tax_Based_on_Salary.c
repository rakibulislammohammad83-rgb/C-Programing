#include <stdio.h>
int main() {
    float salary, tax;
    printf("Enter annual salary: ");
    scanf("%f", &salary);
    if (salary <= 300000)
        tax = 0;
    else if (salary <= 700000)
        tax = (salary - 300000) * 0.05;
    else if (salary <= 1100000)
        tax = 400000 * 0.05 + (salary - 700000) * 0.10;
    else
        tax = 400000 * 0.05 + 400000 * 0.10 + (salary - 1100000) * 0.15;
    printf("Income Tax = %.2f", tax);
    return 0;
}
