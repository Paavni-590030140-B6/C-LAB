//Modifying a Variable through a Pointer

#include <stdio.h>
int main()
{
    int x;
    int *p=&x;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("Original value = %d\n",x);
    *p=*p+10;
    printf("Modified value = %d\n",x);
    return 0;
}
