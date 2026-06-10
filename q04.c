#include <stdio.h>

int main()
{
    int n, i;
    int first = 0, second = 1, next;

    // Ask the user to enter the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Display the Fibonacci series
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++)
    {
        printf("%d ", first);

        // Calculate the next term
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}