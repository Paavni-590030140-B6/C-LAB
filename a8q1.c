//Manual String Length
#include <stdio.h>

int main()
{
    char s[100];
    int i = 0;

    printf("enter string: ");
    scanf("%s", s);

    while(s[i] != '\0')
    {
        i++;
    }

    printf("length = %d", i);

    return 0;
}