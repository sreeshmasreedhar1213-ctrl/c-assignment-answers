#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int letters[26] = {0}; // Array to keep track of letters A-Z
    int i, isPangram = 1;

    // Ask the user to enter a sentence
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Check each character in the string
    for (i = 0; str[i] != '\0'; i++)
    {
        // If character is uppercase A-Z
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            letters[str[i] - 'A'] = 1;
        }

        // If character is lowercase a-z
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            letters[str[i] - 'a'] = 1;
        }
    }

    // Check if all 26 letters were found
    for (i = 0; i < 26; i++)
    {
        if (letters[i] == 0)
        {
            isPangram = 0;
            break;
        }
    }

    // Display the result
    if (isPangram)
    {
        printf("The string is a pangram.\n");
    }
    else
    {
        printf("The string is not a pangram.\n");
    }

    return 0;
}