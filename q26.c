#include <stdio.h>

int main()
{
    int arr[100], result[100];
    int n, i, j = 0;

    // Ask user for size of array
    printf("Enter size of array: ");
    scanf("%d", &n);

    // Take input elements from user
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // First, copy all negative numbers into result array
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            result[j] = arr[i];
            j++;
        }
    }

    // Then, copy all zero and positive numbers into result array
    for (i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            result[j] = arr[i];
            j++;
        }
    }

    // Display the rearranged array
    printf("Rearranged array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", result[i]);
    }

    printf("\n");

    return 0;
}