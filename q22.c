#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;

    int largest, secondLargest;
    int smallest, secondSmallest;

    // Ask user for array size
    printf("Enter size of array: ");
    scanf("%d", &n);

    // Ask user to enter array elements
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Initialize values with first element
    largest = smallest = arr[0];

    // Find largest and smallest first
    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];

        if (arr[i] < smallest)
            smallest = arr[i];
    }

    // Initialize second largest and second smallest
    secondLargest = -1;
    secondSmallest = -1;

    // Find second largest and second smallest
    for (i = 0; i < n; i++)
    {
        // For second largest
        if (arr[i] != largest)
        {
            if (secondLargest == -1 || arr[i] > secondLargest)
            {
                secondLargest = arr[i];
            }
        }

        // For second smallest
        if (arr[i] != smallest)
        {
            if (secondSmallest == -1 || arr[i] < secondSmallest)
            {
                secondSmallest = arr[i];
            }
        }
    }

    // Check if second largest or second smallest was found
    if (secondLargest == -1 || secondSmallest == -1)
    {
        printf("All elements are the same or second values do not exist.\n");
    }
    else
    {
        printf("Second Largest element = %d\n", secondLargest);
        printf("Second Smallest element = %d\n", secondSmallest);
    }

    return 0;
}