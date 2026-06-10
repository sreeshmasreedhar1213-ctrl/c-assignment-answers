#include <stdio.h>

int main()
{
    int num, i;
    int isPrime = 1;  // Assume the number is prime

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Numbers less than 2 are not prime
    if (num < 2)
    {
        isPrime = 0;
    }
    else
    {
        // Check for divisors from 2 to num - 1
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;  // Number is not prime
                break;
            }
        }
    }

    // Display the result
    if (isPrime == 1)
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}