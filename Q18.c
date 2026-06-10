#include <stdio.h>

int main()
{
    int num, pos, n;
    int result;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Ask for the starting bit position
    printf("Enter starting bit position: ");
    scanf("%d", &pos);

    // Ask for the number of bits to extract
    printf("Enter number of bits to extract: ");
    scanf("%d", &n);

    // Shift the desired bits to the right
    num = num >> pos;

    // Create a mask with n bits set to 1
    result = num & ((1 << n) - 1);

    // Display the extracted bits as a number
    printf("Extracted value: %d\n", result);

    return 0;
}