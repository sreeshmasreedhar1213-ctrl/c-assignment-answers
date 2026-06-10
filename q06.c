#include <stdio.h>

// Recursive function to find GCD
int gcd(int a, int b)
{
    // Base case
    if (b == 0)
    {
        return a;
    }

    // Recursive call
    return gcd(b, a % b);
}

int main()
{
    int num1, num2, result;

    // Ask the user to enter two numbers
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Call the function
    result = gcd(num1, num2);

    // Display the result
    printf("GCD of %d and %d is %d\n", num1, num2, result);

    return 0;
}