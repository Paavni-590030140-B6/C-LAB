//quadratic equation analysis
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, r1, r2;

    printf("enter a b c: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a == 0)
    {
        printf("not a quadratic equation");
    }
    else
    {
        d = b * b - 4 * a * c;

        if (d > 0)
        {
            r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);

            printf("real and distinct roots\n");
            printf("root 1 = %.2f\n", r1);
            printf("root 2 = %.2f", r2);
        }
        else if (d == 0)
        {
            r1 = -b / (2 * a);

            printf("real and equal roots\n");
            printf("root = %.2f", r1);
        }
        else
        {
            printf("imaginary roots");
        }
    }

    return 0;
}