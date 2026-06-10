#include <stdio.h>

int main()
{
    int num, temp, i = 0, isNegative = 0;
    char str[20];

    // Ask the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0)
    {
        isNegative = 1;
        num = -num; // Make it positive for processing
    }

    temp = num;

    // Special case for 0
    if (temp == 0)
    {
        str[i++] = '0';
    }
    else
    {
        // Store digits as characters in reverse order
        while (temp > 0)
        {
            str[i++] = (temp % 10) + '0';
            temp = temp / 10;
        }
    }

    // Add negative sign if needed
    if (isNegative)
    {
        str[i++] = '-';
    }

    // Add null character to end the string
    str[i] = '\0';

    // Reverse the string
    int start = 0;
    int end = i - 1;
    char tempChar;

    while (start < end)
    {
        tempChar = str[start];
        str[start] = str[end];
        str[end] = tempChar;

        start++;
        end--;
    }

    // Display the resulting string
    printf("String form: %s\n", str);

    return 0;
}