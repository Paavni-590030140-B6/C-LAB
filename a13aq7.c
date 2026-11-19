//Pointer to Pointer
#include <stdio.h>
int main()
{
    int x=25;
    int *p=&x;
    int **pp=&p;

    printf("Value using x = %d\n",x);
    printf("Value using *p = %d\n",*p);
    printf("Value using **pp = %d\n",**pp);

    printf("Address of x = %p\n",(void*)&x);
    printf("Value of p = %p\n",(void*)p);
    printf("Address of p = %p\n",(void*)&p);
    printf("Value of pp = %p\n",(void*)pp);

    return 0;
}
