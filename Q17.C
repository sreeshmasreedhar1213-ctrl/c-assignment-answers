#include <stdio.h>

int main()
{
    int num, pos, n;
    int i;

    // Ask the user to enter the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Ask for the starting bit position
    printf("Enter starting bit position: ");
    scanf("%d", &pos);

    // Ask for the number of bits to toggle
    printf("Enter number of bits to toggle: ");
    scanf("%d", &n);

    // Toggle n bits starting from position pos
    for (i = 0; i < n; i++)
    {
        num = num ^ (1 << (pos + i));
    }

    // Display the result
    printf("Number after toggling bits: %d\n", num);

    return 0;
}