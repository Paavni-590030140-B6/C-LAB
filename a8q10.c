//Split a Sentence into Words
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    char *p;
    int count = 0;

    printf("enter sentence: ");
    fgets(s, 100, stdin);

    p = strtok(s, " ");

    while(p != NULL)
    {
        printf("%s\n", p);
        count++;
        p = strtok(NULL, " ");
    }

    printf("total words = %d", count);

    return 0;
}