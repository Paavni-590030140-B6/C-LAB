//Automatic Local Variables
#include <stdio.h>
void display()
{
    auto int x=25;
    printf("Inside function: %d\n",x);
    {
        auto int y=50;
        printf("Inside block: %d\n",y);
    }
    printf("After block: %d\n",x);
}
int main()
{
    display();
    display();
    return 0;
}
