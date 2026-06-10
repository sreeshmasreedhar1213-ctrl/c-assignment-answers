#include <stdio.h>

int main()
{
    // Declare an integer variable to store the user's input
    int num;

    // Ask the user to enter a number
    printf("Enter an integer: ");

    // Read the number entered by the user
    scanf("%d", &num);

    // Check if the number is divisible by 2
    if (num % 2 == 0)
    {
        // Display message if the number is even
        printf("%d is an even number.\n", num);
    }
    else
    {
        // Display message if the number is odd
        printf("%d is an odd number.\n", num);
    }

    // End the program
    return 0;
}