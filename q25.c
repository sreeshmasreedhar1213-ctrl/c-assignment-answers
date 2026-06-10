#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j;
    int target;
    int found = 0;

    // Ask user for array size
    printf("Enter size of array: ");
    scanf("%d", &n);

    // Ask user to enter array elements
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Ask user for target sum
    printf("Enter target sum: ");
    scanf("%d", &target);

    printf("Pairs with sum %d are:\n", target);

    // Check all possible pairs using nested loops
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)   // j starts from i+1 to avoid using same element twice
        {
            if (arr[i] + arr[j] == target)
            {
                printf("(%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    // If no pair found
    if (found == 0)
    {
        printf("No pairs found with the given sum.\n");
    }

    return 0;
}