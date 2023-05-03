// Rotate string

#include <stdio.h>
#include <string.h>

void rotate_left(char *str, int n) {
    int len = strlen(str);
    n %= len;
    if (n < 0) {
        n += len;
    }
    char temp[n + 1];
    strncpy(temp, str, n);
    temp[n] = '\0';
    memmove(str, str + n, len - n + 1);
    strcat(str, temp);
}

void rotate_right(char *str, int n) {
    int len = strlen(str);
    n %= len;
    if (n < 0) {
        n += len;
    }
    char temp[n + 1];
    strncpy(temp, str + len - n, n);
    temp[n] = '\0';
    memmove(str + n, str, len - n + 1);
    strncpy(str, temp, n);
}

int main() {
    char str[100];
    int n;
    char direction;

    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0'; 
    printf("Enter the number of rotations: ");
    scanf("%d", &n);

    printf("Enter direction of rotation (L or R): ");
    scanf(" %c", &direction);

    if (direction == 'L' || direction == 'l') {
        rotate_left(str, n);
    } else if (direction == 'R' || direction == 'r') {
        rotate_right(str, n);
    } else {
        printf("Invalid direction of rotation\n");
        return 1;
    }

    printf("Rotated string: %s\n", str);

    return 0;
}
