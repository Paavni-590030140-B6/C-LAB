//menu-driven calculator
#include <stdio.h>

int main()
{
    int choice, a, b, i, power = 1;

    printf("1. addition\n");
    printf("2. subtraction\n");
    printf("3. multiplication\n");
    printf("4. division\n");
    printf("5. modulus\n");
    printf("6. power\n");
    printf("7. exit\n");

    printf("enter choice: ");
    scanf("%d", &choice);

    if (choice == 7)
    {
        printf("exit");
    }
    else
    {
        printf("enter two numbers: ");
        scanf("%d%d", &a, &b);

        switch (choice)
        {
            case 1:
                printf("result = %d", a + b);
                break;

            case 2:
                printf("result = %d", a - b);
                break;

            case 3:
                printf("result = %d", a * b);
                break;

            case 4:
                printf("result = %d", a / b);
                break;

            case 5:
                printf("result = %d", a % b);
                break;

            case 6:
                for (i = 1; i <= b; i++)
                {
                    power = power * a;
                }
                printf("result = %d", power);
                break;

            default:
                printf("invalid choice");
        }
    }

    return 0;
}