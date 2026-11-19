//Pointer Arithmetic with an Array
#include <stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int *p=&a[1];
    printf("Original pointer = %p, Value = %d\n",(void*)p,*p);

    p++;
    printf("After p++ = %p, Value = %d\n",(void*)p,*p);

    p--;
    printf("After p-- = %p, Value = %d\n",(void*)p,*p);

    printf("After p+2 = %p, Value = %d\n",(void*)(p+2),*(p+2));
    printf("After p-1 = %p, Value = %d\n",(void*)(p-1),*(p-1));
    return 0;
}
