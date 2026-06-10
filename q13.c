#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int length, i;
    char temp;

    // Ask the user to enter a string
    printf("Enter a string: ");
    scanf("%s", str);

    // Find the length of the string
    length = strlen(str);

    // Reverse the string by swapping characters
    for (i = 0; i < length / 2; i++)
    {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    // Display the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}