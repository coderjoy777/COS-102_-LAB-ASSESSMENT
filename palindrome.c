#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Reverse the integer mathematically
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Compare original number with the reversed number
    if (originalNum == reversedNum) {
        printf("%d is a Palindrome.\n", originalNum);
    } else {
        printf("%d is NOT a Palindrome.\n", originalNum);
    }

    return 0;
}