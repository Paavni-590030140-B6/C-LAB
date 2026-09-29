//Palindrome String
#include <stdio.h>
int main()
{
    char s[100];
    int i = 0, j, n = 0, p = 1;
    printf("enter string: ");
    scanf("%s", s);
    while(s[n] != '\0')
    {
        if(s[n] >= 'A' && s[n] <= 'Z')
            s[n] = s[n] + 32;
        n++;
    }
    j = n - 1;
    while(i < j)
    {
        if(s[i] != s[j])
        {
            p = 0;
            break;
        }
        i++;
        j--;
    }
    if(p == 1)
        printf("palindrome");
    else
        printf("not palindrome");
    return 0;
}