//Arithmetic Operations
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int divi(int a, int b)
{
    return a / b;
}

int mod(int a, int b)
{
    return a % b;
}

int main()
{
    int a, b;

    printf("enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("add = %d\n", add(a, b));
    printf("sub = %d\n", sub(a, b));
    printf("mul = %d\n", mul(a, b));

    if(b == 0)
        printf("division and modulus not possible");
    else
    {
        printf("div = %d\n", divi(a, b));
        printf("mod = %d", mod(a, b));
    }

    return 0;
}