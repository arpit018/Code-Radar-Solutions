#include <stdio.h>

int main() {
    int num, count = 0, reverse = 0, temp;

    // Taking user input
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Counting digits and reversing the number
    while (temp != 0) {
        int digit = temp % 10;  // Extract last digit
        reverse = reverse * 10 + digit;
