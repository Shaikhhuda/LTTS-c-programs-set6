// compute total seconds

#include <stdio.h>
#include <stdlib.h>

int main() {
    char time_string[9];
    int hours, minutes, seconds, total_seconds;

    printf("Enter time in format hh:mm:ss: ");
    scanf("%s", time_string);

    hours = atoi(time_string);
    minutes = atoi(time_string + 3);
    seconds = atoi(time_string + 6);

    total_seconds = hours * 3600 + minutes * 60 + seconds;

    printf("Total seconds: %d\n", total_seconds);

    return 0;
}
