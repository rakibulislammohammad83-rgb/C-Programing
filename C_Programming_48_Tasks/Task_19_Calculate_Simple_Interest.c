#include <stdio.h>
int main() {
    float principal, rate, time, SI;
    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &principal, &rate, &time);
    SI = (principal * rate * time) / 100;
    printf("Simple Interest = %.2f", SI);
    return 0;
}
