#include <stdio.h>

// Define a structure for complex number
struct Complex
{
    float real;
    float imag;
};

// Function to add two complex numbers
struct Complex addComplex(struct Complex c1, struct Complex c2)
{
    struct Complex result;

    // Add real parts
    result.real = c1.real + c2.real;

    // Add imaginary parts
    result.imag = c1.imag + c2.imag;

    return result;
}

// Function to display a complex number
void displayComplex(struct Complex c)
{
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

int main()
{
    struct Complex num1, num2, sum;

    // Take input for first complex number
    printf("Enter first complex number:\n");
    printf("Real part: ");
    scanf("%f", &num1.real);
    printf("Imaginary part: ");
    scanf("%f", &num1.imag);

    // Take input for second complex number
    printf("Enter second complex number:\n");
    printf("Real part: ");
    scanf("%f", &num2.real);
    printf("Imaginary part: ");
    scanf("%f", &num2.imag);

    // Add the two complex numbers
    sum = addComplex(num1, num2);

    // Display result
    printf("Sum of complex numbers = ");
    displayComplex(sum);

    return 0;
}