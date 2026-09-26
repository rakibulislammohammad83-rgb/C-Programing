#include <stdio.h>
int main() {
    float marks;
    printf("Enter your marks (out of 100): ");
    scanf("%f", &marks);
    if (marks >= 60)
        printf("Eligible for admission");
    else
        printf("Not eligible for admission");
    return 0;
}
