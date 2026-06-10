#include <stdio.h>

// Function for addition
float add(float a, float b)
{
    return a + b;
}

// Function for subtraction
float subtract(float a, float b)
{
    return a - b;
}

// Function for multiplication
float multiply(float a, float b)
{
    return a * b;
}

// Function for division (with error handling)
float divide(float a, float b)
{
    if (b == 0)
    {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    else
    {
        return a / b;
    }
}

// Selector function to choose operation
float calculate(float a, float b, char op)
{
    if (op == '+')
    {
        return add(a, b);
    }
    else if (op == '-')
    {
        return subtract(a, b);
    }
    else if (op == '*')
    {
        return multiply(a, b);
    }
    else if (op == '/')
    {
        return divide(a, b);
    }
    else
    {
        printf("Invalid operator!\n");
        return 0;
    }
}

int main()
{
    float num1, num2, result;
    char op;

    // Take input from user
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Call selector function
    result = calculate(num1, num2, op);

    // Display result
    printf("Result = %.2f\n", result);

    return 0;
}