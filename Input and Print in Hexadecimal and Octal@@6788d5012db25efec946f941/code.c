#include <stdio.h>

int main() {
    int num, count = 0, reverse = 0, temp;

    // Get user input
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Count digits and reverse the number
    while (temp != 0) {
        int digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10;
        count++;
    }

    // Print results
    printf("\nNumber of digits: %d\n", count);
    printf("Reversed number: %d\n", reverse);
    printf("Decimal: %d\n", num);
    printf("Hexadecimal: %X\n", num);
    printf("Octal: %o\n", num);

    return 0;
}
