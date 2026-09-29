//String Length and Comparison
#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    int c;

    printf("enter first string: ");
    scanf("%s", a);
    printf("enter second string: ");
    scanf("%s", b);
    printf("length of first string = %d\n", strlen(a));
    printf("length of second string = %d\n", strlen(b));
    c = strcmp(a, b);
    if(c == 0)
        printf("both strings are equal");
    else if(c < 0)
        printf("%s comes first", a);
    else
        printf("%s comes first", b);

    return 0;
}