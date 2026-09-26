#include <stdio.h>
int main() {
    long int totalSeconds, hours, minutes, seconds;
    printf("Enter total seconds: ");
    scanf("%ld", &totalSeconds);
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;
    printf("%ld hours, %ld minutes, %ld seconds", hours, minutes, seconds);
    return 0;
}
