#include <stdio.h>

int main()
{
    char str[100];
    int i;

    // Ask the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Check each character in the string
    for (i = 0; str[i] != '\0'; i++)
    {
        // If the character is an uppercase letter
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            // Convert it to lowercase using ASCII
            str[i] = str[i] + 32;
        }
    }

    // Display the modified string
    printf("String in lowercase: %s", str);

    return 0;
}