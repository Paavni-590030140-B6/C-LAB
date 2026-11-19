//Declaration and Dereferencing of a Pointer
#include <stdio.h>
int main()
{
    int x=25;
    int *p=&x;
    printf("Value of x = %d\n",x);
    printf("Address of x = %p\n",(void*)&x);
    printf("Pointer value = %p\n",(void*)p);
    printf("Dereferenced value = %d\n",*p);
    return 0;
}
