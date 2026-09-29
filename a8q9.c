//Search for a Substring
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], w[50];
    char *p;

    printf("enter sentence: ");
    fgets(s, 100, stdin);

    printf("enter word: ");
    scanf("%s", w);

    p = strstr(s, w);

    if(p != NULL)
        printf("position = %d", p - s + 1);
    else
        printf("word not found");

    return 0;
}