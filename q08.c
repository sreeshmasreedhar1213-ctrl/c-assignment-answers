#include <stdio.h>

// Function to convert decimal number to another base
void convertBase(int num, int base)
{
    char result[50];
    int i = 0, remainder;

    // Handle the case when number is 0
    if (num == 0)
    {
        printf("Converted Number: 0\n");
        return;
    }

    // Repeated division method
    while (num > 0)
    {
        remainder = num % base;

        if (remainder < 10)
        {
            result[i] = remainder + '0';
        }
        else
        {
            result[i] = remainder - 10 + 'A';
        }

        num = num / base;
        i++;
    }

    // Print the result in reverse order
    printf("Converted Number: ");

    for (i = i - 1; i >= 0; i--)
    {
        printf("%c", result[i]);
    }

    printf("\n");
}

int main()
{
    int number, base;

    // Ask the user to enter a decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &number);

    // Ask the user to enter the target base
    printf("Enter the base (2 to 16): ");
    scanf("%d", &base);

    // Check if the base is valid
    if (base < 2 || base > 16)
    {
        printf("Invalid base! Please enter a base between 2 and 16.\n");
    }
    else
    {
        // Call the function
        convertBase(number, base);
    }

    return 0;
}