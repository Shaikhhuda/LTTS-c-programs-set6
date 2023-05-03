// converting a string into the integer

#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100];
    int num;

    printf("Enter a number as a string: ");
    scanf("%s", str);

    num = atoi(str);

    printf("The integer value of the string is: %d\n", num);

    return 0;
}

