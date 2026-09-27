//Array Traversal, Sum, and Average
#include <stdio.h>

int main()
{
    int a[100], n, i, sum = 0;
    float avg;

    printf("enter number of elements: ");
    scanf("%d", &n);

    printf("enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("array elements: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    avg = (float)sum / n;

    printf("\nsum = %d", sum);
    printf("\naverage = %.2f", avg);

    return 0;
}