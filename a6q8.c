// find the sum of the series

#include <stdio.h>

int main()
{
    int x, n, i, j;
    float sum = 0, p, f;

    printf("enter x: ");
    scanf("%d", &x);

    printf("enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        p = 1;
        f = 1;

        for(j = 1; j <= i; j++)
        {
            p = p * x;
            f = f * j;
        }

        if(i % 2 == 1)
            sum = sum + p / f;
        else
            sum = sum - p / f;
    }

    printf("sum = %.2f", sum);

    return 0;
}