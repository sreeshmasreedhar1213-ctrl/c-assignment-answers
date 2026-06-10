#include <stdio.h>

int main()
{
    int num1, num2;
    int pos, n;
    int i;

    int bit1, bit2;

    // Ask user to enter first number
    printf("Enter first number: ");
    scanf("%d", &num1);

    // Ask user to enter second number
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Ask for starting bit position
    printf("Enter starting bit position: ");
    scanf("%d", &pos);

    // Ask for number of bits to swap
    printf("Enter number of bits (n): ");
    scanf("%d", &n);

    // Loop to swap n bits one by one
    for (i = 0; i < n; i++)
    {
        // Get i-th bit from both numbers at position (pos + i)
        bit1 = (num1 >> (pos + i)) & 1;
        bit2 = (num2 >> (pos + i)) & 1;

        // If bits are different, we need to swap them
        if (bit1 != bit2)
        {
            // Toggle bit in num1
            num1 = num1 ^ (1 << (pos + i));

            // Toggle bit in num2
            num2 = num2 ^ (1 << (pos + i));
        }
    }

    // Display final swapped values
    printf("After swapping bits:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);

    return 0;
}