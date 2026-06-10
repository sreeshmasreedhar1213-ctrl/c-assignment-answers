#include <stdio.h>

int main()
{
    int num1, num2;
    int pos, n;
    int mask;
    int result;

    // Ask user to enter first number
    printf("Enter first number: ");
    scanf("%d", &num1);

    // Ask user to enter second number
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Ask for starting bit position
    printf("Enter starting bit position: ");
    scanf("%d", &pos);

    // Ask for number of bits to replace
    printf("Enter number of bits (n): ");
    scanf("%d", &n);

    // Step 1: Create a mask with n bits set to 1
    mask = ((1 << n) - 1) << pos;

    // Step 2: Clear n bits in num1 at position pos
    result = num1 & (~mask);

    // Step 3: Take n bits from num2 and shift them to correct position
    result = result | ((num2 << pos) & mask);

    // Display the final result
    printf("Final number after replacement: %d\n", result);

    return 0;
}