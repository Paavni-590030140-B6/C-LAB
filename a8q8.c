//Search for a Character
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], ch;
    char *p;

    printf("enter string: ");
    scanf("%s", s);

    printf("enter character: ");
    scanf(" %c", &ch);

    p = strchr(s, ch);

    if(p != NULL)
        printf("position = %d", p - s + 1);
    else
        printf("character not found");

    return 0;
}