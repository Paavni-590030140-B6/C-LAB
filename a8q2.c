//Manual String Copy
#include <stdio.h>

int main()
{
    char a[100], b[100];
    int i = 0;

    printf("enter string: ");
    scanf("%s", a);

    while(a[i] != '\0')
    {
        b[i] = a[i];
        i++;
    }

    b[i] = '\0';

    printf("original string = %s\n", a);
    printf("copied string = %s", b);

    return 0;
}