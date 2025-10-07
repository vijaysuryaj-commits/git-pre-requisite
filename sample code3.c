#include <stdio.h>

int main() {
    char name[50];

    // Ask for user's name
    printf("Enter your name: ");
    scanf("%s", name);

    // Print a greeting
    printf("Hello, %s!\n", name);

    return 0;
}
