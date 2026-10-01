//Write a C program that accepts input as day, month, and year. Determine whether the date is valid. 
#include <stdio.h>
int main()
{
    int d, m, y;
    printf("enter day, month and year: ");
    scanf("%d%d%d", &d, &m, &y);
    if (y <= 0 || m < 1 || m > 12 || d < 1)
    {
        printf("invalid date");
    }
    else
    {
        if (m == 2)
        {
            if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
            {
                if (d <= 29)
                    printf("valid date");
                else
                    printf("invalid date");
            }
            else
            {
                if (d <= 28)
                    printf("valid date");
                else
                    printf("invalid date");
            }
        }
        else
        {
            if (m == 4 || m == 6 || m == 9 || m == 11)
            {
                if (d <= 30)
                    printf("valid date");
                else
                    printf("invalid date");
            }
            else
            {
                if (d <= 31)
                    printf("valid date");
                else
                    printf("invalid date");
            }
        }
    }

    return 0;
}