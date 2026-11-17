//Static Global Variable
#include <stdio.h>
static int x=100;
void display()
{
    printf("Inside function: %d\n",x);
}
int main()
{
    printf("Inside main: %d\n",x);
    display();
    return 0;
}
