// print pascal's triangle

#include <stdio.h>

int main()
{
    int n, i, j, x;

    printf("enter number of rows: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        x = 1;

        for(j = 0; j <= i; j++)
        {
            printf("%d ", x);
            x = x * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}