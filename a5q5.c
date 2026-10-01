//bank transaction menu
#include <stdio.h>

int main()
{
    int choice;
    float balance = 5000, amount, rate;

    do
    {
        printf("\n1. balance");
        printf("\n2. deposit");
        printf("\n3. withdraw");
        printf("\n4. interest");
        printf("\n5. exit");

        printf("\nenter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("balance = %.2f", balance);
                break;

            case 2:
                printf("enter amount: ");
                scanf("%f", &amount);
                balance = balance + amount;
                printf("balance = %.2f", balance);
                break;

            case 3:
                printf("enter amount: ");
                scanf("%f", &amount);

                if (amount <= balance)
                {
                    balance = balance - amount;
                    printf("balance = %.2f", balance);
                }
                else
                {
                    printf("not enough balance");
                }
                break;

            case 4:
                printf("enter rate: ");
                scanf("%f", &rate);
                printf("interest = %.2f", balance * rate / 100);
                break;

            case 5:
                printf("exit");
                break;

            default:
                printf("invalid choice");
        }

    } while(choice != 5);

    return 0;
}