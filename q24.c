#include <stdio.h>

int main()
{
    int a[100], b[100], result[200];
    int n1, n2;
    int i = 0, j = 0, k = 0;

    // Ask size of first array
    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);

    // Input first sorted array
    printf("Enter elements of first sorted array:\n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    // Ask size of second array
    printf("Enter size of second sorted array: ");
    scanf("%d", &n2);

    // Input second sorted array
    printf("Enter elements of second sorted array:\n");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    // Reset indexes for merging
    i = 0;
    j = 0;
    k = 0;

    // Compare both arrays and merge
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            result[k] = a[i];
            i++;
        }
        else
        {
            result[k] = b[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of first array
    while (i < n1)
    {
        result[k] = a[i];
        i++;
        k++;
    }

    // Copy remaining elements of second array
    while (j < n2)
    {
        result[k] = b[j];
        j++;
        k++;
    }

    // Display merged sorted array
    printf("Merged sorted array:\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", result[i]);
    }

    printf("\n");

    return 0;
}