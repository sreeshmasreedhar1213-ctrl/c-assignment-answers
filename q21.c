#include <stdio.h>

int main()
{
    int arr[100], result[100];
    int n, i, j, k;
    int isDuplicate;

    // Ask user for size of array
    printf("Enter size of array: ");
    scanf("%d", &n);

    // Take input elements from user
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    k = 0; // index for result array

    // Loop through each element of original array
    for (i = 0; i < n; i++)
    {
        isDuplicate = 0;

        // Check if element already exists in result array
        for (j = 0; j < k; j++)
        {
            if (arr[i] == result[j])
            {
                isDuplicate = 1;
                break;
            }
        }

        // If not duplicate, add it to result array
        if (isDuplicate == 0)
        {
            result[k] = arr[i];
            k++;
        }
    }

    // Display the array after removing duplicates
    printf("Array after removing duplicates:\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", result[i]);
    }

    printf("\n");

    return 0;
}