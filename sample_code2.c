#include <stdio.h>

int main() {
    int num, i;

    // Enter a number
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    // Printing the multiplication table from 1 to 10
    printf("Multiplication Table of %d:\n", num);
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
