#include <stdio.h>

// Function to count digit frequencies
void countFrequency(int num, int freq[])
{
    int digit;

    // Handle the case when the number is 0
    if (num == 0)
    {
        freq[0] = 1;
        return;
    }

    // Extract digits and count their frequency
    while (num > 0)
    {
        digit = num % 10;
        freq[digit]++;
        num = num / 10;
    }
}

int main()
{
    int num, i;
    int freq[10] = {0}; // Initialize all frequencies to 0

    // Ask the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Call the function
    countFrequency(num, freq);

    // Display the frequencies
    printf("\nDigit Frequencies:\n");

    for (i = 0; i < 10; i++)
    {
        printf("Digit %d: %d\n", i, freq[i]);
    }

    return 0;
}