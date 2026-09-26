#include <stdio.h>
int main() {
    int units;
    float bill;
    printf("Enter units consumed: ");
    scanf("%d", &units);
    if (units <= 100)
        bill = units * 11.0;
    else if (units <= 200)
        bill = 100 * 11.0 + (units - 100) * 12.0;
    else
        bill = 100 * 1.0 + 100 * 7.5 + (units - 200) * 9.0;
    printf("Electricity Bill = %.2f", bill);
    return 0;
}
