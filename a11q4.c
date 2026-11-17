//Function Call Counter Using static
#include <stdio.h>
void fcallcount()
{
    static int count=0;
    count++;
    printf("Function called %d times\n",count);
}
int main()
{
    fcallcount();
    fcallcount();
    fcallcount();
    fcallcount();
    fcallcount();
    return 0;
}
