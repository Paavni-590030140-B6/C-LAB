//Variable Scope
#include <stdio.h>

int a = 10;     // global variable

int main()
{
    int b = 20;         // local variable
    static int c = 30;  // static variable

    printf("inside main before block:\n");
    printf("global variable a = %d\n", a);
    printf("local variable b = %d\n", b);
    printf("static variable c = %d\n", c);

    {
        int b = 50;     // local variable inside block

        a = a + 5;
        b = b + 5;
        c = c + 5;

        printf("\ninside block:\n");
        printf("global variable a = %d\n", a);
        printf("block local variable b = %d\n", b);
        printf("static variable c = %d\n", c);
    }

    printf("\ninside main after block:\n");
    printf("global variable a = %d\n", a);
    printf("local variable b = %d\n", b);
    printf("static variable c = %d\n", c);

    return 0;
}