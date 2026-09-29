//Character-Frequency Analysis
#include <stdio.h>
int main()
{
    char s[100];
    int i, j, count;
    printf("enter string: ");
    scanf("%s", s);
    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
    }
    for(i = 0; s[i] != '\0'; i++)
    {
        count = 1;
        for(j = 0; j < i; j++)
        {
            if(s[i] == s[j])
                break;
        }
        if(j != i)
            continue;

        for(j = i + 1; s[j] != '\0'; j++)
        {
            if(s[i] == s[j])
                count++;
        }
        printf("%c = %d\n", s[i], count);
    }
    return 0;
}