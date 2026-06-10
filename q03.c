#include <stdio.h>

int main()
{
    int num, i;
    long long factorial = 1;

    // Ask the user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Calculate factorial using a loop
    for (i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }

    // Display the result
    printf("Factorial of %d = %lld\n", num, factorial);

    return 0;
}