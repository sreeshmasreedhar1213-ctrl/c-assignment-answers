#include <stdio.h>

// Function to check if a number is perfect
int isPerfect(int num)
{
    int i, sum = 0;

    // Find the sum of proper divisors
    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }

    // Return 1 if perfect, otherwise return 0
    if (sum == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;

    // Ask the user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check and display the result
    if (isPerfect(num))
    {
        printf("%d is a Perfect Number.\n", num);
    }
    else
    {
        printf("%d is not a Perfect Number.\n", num);
    }

    return 0;
}