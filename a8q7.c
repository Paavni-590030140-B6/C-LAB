//String Copy and Concatenation
#include <stdio.h>
#include <string.h>

int main()
{
    char a[50], b[50], c[100];

    printf("enter first name: ");
    scanf("%s", a);

    printf("enter last name: ");
    scanf("%s", b);

    strcpy(c, a);
    strcat(c, " ");
    strcat(c, b);

    printf("complete name = %s", c);

    return 0;
}