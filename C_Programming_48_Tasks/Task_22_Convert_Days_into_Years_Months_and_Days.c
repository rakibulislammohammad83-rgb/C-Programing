#include <stdio.h>
int main() {
    int totalDays, years, months, days;
    printf("Enter total days: ");
    scanf("%d", &totalDays);
    years = totalDays / 365;
    months = (totalDays % 365) / 30;
    days = (totalDays % 365) % 30;
    printf("%d years, %d months, %d days", years, months, days);
    return 0;
}
