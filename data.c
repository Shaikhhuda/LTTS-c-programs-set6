// Data validation

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char email[100];

    printf("Enter an email address: ");
    fgets(email, 100, stdin);
    email[strcspn(email, "\n")] = '\0';

    char username[50], domain[50], extension[10];
    int i = 0, j = 0, k = 0;
    while (email[i] != '@') {
        if (isalnum(email[i]) || email[i] == '.') {
            username[j++] = email[i];
        } else {
            printf("Invalid email address: Invalid character '%c' in username\n", email[i]);
            return 1;
        }
        i++;
    }
    username[j] = '\0';
    i++;
    while (email[i] != '.') {
        if (isalpha(email[i])) {
            domain[k++] = email[i];
        } else {
            printf("Invalid email address: Invalid character '%c' in domain name\n", email[i]);
            return 1;
        }
        i++;
    }
    domain[k] = '\0';
    i++;
    k = 0;
    while (email[i] != '\0') {
        if (isalpha(email[i])) {
            extension[k++] = email[i];
        } else {
            printf("Invalid email address: Invalid character '%c' in extension\n", email[i]);
            return 1;
        }
        i++;
    }
    extension[k] = '\0';
    
    printf("Valid email address\n");

    return 0;
}
