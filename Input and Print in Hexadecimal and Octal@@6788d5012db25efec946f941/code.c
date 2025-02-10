#include <stdio.h>

int main() {
    int num, count = 0, reverse = 0, temp, originalNum;

    // Get user input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store original value for later
    originalNum = num;
    temp = (num < 0) ? -num : num;  // Handle negative numbers for reversal

    // Count digits and reverse the number
    while (temp != 0) {
        int digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10;
        count++;
    }

    // Special case for 0 (since while loop won't run)
    if (num == 0) {
        count = 1;
        reverse = 0;
    }

    // Restore sign to reversed number
    reverse = (num < 0) ? -reverse : reverse;

    // Print results
    printf("\nNumber of digits: %d\n", count);
    printf("Reversed number: %d\n", reverse);
    printf("Decimal: %d\n", originalNum);
    printf("Hexadecimal: %X\n", originalNum);
    printf("Octal: %o\n", originalNum);

    return 0;
}

