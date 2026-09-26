#include <stdio.h>
#include <math.h>
int main() {
    float principal, rate, time, CI, amount;
    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &principal, &rate, &time);
    amount = principal * pow(1 + rate / 100, time);
    CI = amount - principal;
    printf("Compound Interest = %.2f", CI);
    return 0;
}
