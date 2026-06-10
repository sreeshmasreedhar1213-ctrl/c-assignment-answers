#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int length, i;
    int isPalindrome = 1; // Assume the string is a palindrome

    // Ask the user to enter a string
    printf("Enter a string: ");
    scanf("%s", str);

    // Find the length of the string
    length = strlen(str);

    // Compare characters from the beginning and end
    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    // Display the result
    if (isPalindrome)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}