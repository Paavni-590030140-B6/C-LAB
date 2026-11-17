//Block Scope and Shadowing
#include <stdio.h>
int x=100;
int main()
{
    printf("Global variable: %d\n",x);
    {
        int x=50;
        printf("Local variable: %d\n",x);
    }
    printf("Global variable after block: %d\n",x);
    return 0;
}
