//prime numbers in a range
#include <stdio.h>

int main()
{
    int a, b, i, j, c = 0, p;

    printf("enter lower limit: ");
    scanf("%d", &a);

    printf("enter upper limit: ");
    scanf("%d", &b);

    for (i = a; i <= b; i++)
    {
        p = 1;

        if (i < 2)
            p = 0;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                p = 0;
                break;
            }
        }

        if (p == 1)
        {
            printf("%d ", i);
            c++;
        }
    }

    printf("\ntotal prime numbers = %d", c);

    return 0;
}