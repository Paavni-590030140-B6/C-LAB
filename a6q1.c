// Write a program to print multiplication table from 1 to 10.

#include <stdio.h>

int main()
{
    int n, i;

    printf("enter your number: ");
    scanf("%d", &n);

    for(i=1; i<=10; i++)
    {
        printf("%d x %d = %d\n", n, i, n*i);
    }

    return 0;
}