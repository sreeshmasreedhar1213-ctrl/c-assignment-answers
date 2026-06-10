#include <stdio.h>

int main()
{
    char str[200];
    char result[200];
    int i, j = 0;

    // Ask the user to enter a sentence
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Copy characters to the new string
    for (i = 0; str[i] != '\0'; i++)
    {
        // If current character and previous character are both spaces,
        // skip the current space
        if (str[i] == ' ' && str[i + 1] == ' ')
        {
            continue;
        }

        // Otherwise, copy the character
        result[j] = str[i];
        j++;
    }

    // Add the null character at the end
    result[j] = '\0';

    // Display the cleaned string
    printf("Cleaned string: %s", result);

    return 0;
}