#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int originalNum = num;
    int sum = 0;
    int digitCount = 0;

    while (num != 0) {
        num /= 10;
        digitCount++;
    }

    
    num = originalNum;

    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, digitCount);
        num /= 10;
    }

    
    if (sum == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}