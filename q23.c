#include <stdio.h>

int main()
{
    int arr[100], temp[100];
    int n, size, i;
    int positions;
    char direction;

    // Ask user for array size
    printf("Enter size of array: ");
    scanf("%d", &size);

    // Ask user to enter array elements
    printf("Enter array elements:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Ask number of positions to rotate
    printf("Enter number of positions to rotate: ");
    scanf("%d", &positions);

    // Ask direction (L or R)
    printf("Enter direction (L for left, R for right): ");
    scanf(" %c", &direction);

    // Make sure positions is within array size
    positions = positions % size;

    // LEFT ROTATION
    if (direction == 'L' || direction == 'l')
    {
        for (i = 0; i < size; i++)
        {
            temp[i] = arr[(i + positions) % size];
        }
    }

    // RIGHT ROTATION
    else if (direction == 'R' || direction == 'r')
    {
        for (i = 0; i < size; i++)
        {
            temp[i] = arr[(i - positions + size) % size];
        }
    }

    else
    {
        printf("Invalid direction!\n");
        return 0;
    }

    // Copy rotated array back to original array
    for (i = 0; i < size; i++)
    {
        arr[i] = temp[i];
    }

    // Display rotated array
    printf("Rotated array:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}