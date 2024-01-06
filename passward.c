#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isStrongPassword(char password[]) {
    int length = strlen(password);
    int hasUpperCase = 0, hasLowerCase = 0, hasDigit = 0, hasSpecialChar = 0;

    if (length < 8) {
        return 0; // Password is not strong if it's less than 8 characters
    }

    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) {
            hasUpperCase = 1;
        } else if (islower(password[i])) {
            hasLowerCase = 1;
        } else if (isdigit(password[i])) {
            hasDigit = 1;
        } else {
            hasSpecialChar = 1;
        }
    }

    // Password is strong if it satisfies all the criteria
    return (hasUpperCase && hasLowerCase && hasDigit && hasSpecialChar);
}

int main() {
    char password[50];

    printf("Enter your password: ");
    scanf("%s", password);

    if (isStrongPassword(password)) {
        printf("Strong password! Good job!\n");
    } else {
        printf("Weak password. Make it stronger!\n");
    }

    return 0;
}

