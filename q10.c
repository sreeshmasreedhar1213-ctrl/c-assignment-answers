#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;
    int number = 0;

    // Ask the user to enter a number as a string
    printf("Enter a number: ");
    scanf("%s", str);

    // Convert string to integer manually
    while (str[i] != '\0')
    {
        // Check if the character is a digit
        if (str[i] >= '0' && str[i] <= '9')
        {
            number = number * 10 + (str[i] - '0');
        }

        i++;
    }

    // Display the result
    printf("Integer value = %d\n", number);

    return 0;
}