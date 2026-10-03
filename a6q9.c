// menu driven number operations

#include <stdio.h>

int main()
{
    int ch, n, a, r, c, sum, i;

    do
    {
        printf("\n1. palindrome");
        printf("\n2. armstrong number");
        printf("\n3. prime number");
        printf("\n4. sum of digits");
        printf("\n5. count digits");
        printf("\n6. exit");

        printf("\nenter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("enter a number: ");
                scanf("%d", &n);

                a = n;
                c = 0;

                while(n > 0)
                {
                    c = c * 10 + n % 10;
                    n = n / 10;
                }

                if(a == c)
                    printf("palindrome number");
                else
                    printf("not palindrome number");

                break;

            case 2:
                printf("enter a number: ");
                scanf("%d", &n);

                a = n;
                sum = 0;

                while(n > 0)
                {
                    r = n % 10;
                    sum = sum + r*r*r;
                    n = n / 10;
                }

                if(a == sum)
                    printf("armstrong number");
                else
                    printf("not armstrong number");

                break;

            case 3:
                printf("enter a number: ");
                scanf("%d", &n);

                c = 0;

                for(i = 1; i <= n; i++)
                {
                    if(n % i == 0)
                        c++;
                }

                if(c == 2)
                    printf("prime number");
                else
                    printf("not prime number");

                break;

            case 4:
                printf("enter a number: ");
                scanf("%d", &n);

                sum = 0;

                while(n > 0)
                {
                    sum = sum + n % 10;
                    n = n / 10;
                }

                printf("sum = %d", sum);
                break;

            case 5:
                printf("enter a number: ");
                scanf("%d", &n);

                c = 0;

                while(n > 0)
                {
                    c++;
                    n = n / 10;
                }

                printf("number of digits = %d", c);
                break;

            case 6:
                printf("exit");
                break;

            default:
                printf("invalid choice");
        }

    } while(ch != 6);

    return 0;
}