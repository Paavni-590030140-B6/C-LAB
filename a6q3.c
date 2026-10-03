//check for palindrome number
#include <stdio.h>

int main()
{
    int a, b, c = 0;

    printf("Enter a number: ");
    scanf("%d", &a);

    b = a;

    while (a > 0)
    {
        c = c * 10 + a % 10;
        a = a / 10;
    }

    if (b == c)
        printf("Palindrome number");
    else
        printf("Not a palindrome number");

    return 0;
}