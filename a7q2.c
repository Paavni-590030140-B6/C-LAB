//Search an element in an Array
#include <stdio.h>
int main()
{
    int a[100], n, i, x, c = 0;
    printf("enter number of elements: ");
    scanf("%d", &n);

    printf("enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter element to search: ");
    scanf("%d", &x);
    printf("positions: ");
    for(i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            printf("%d ", i + 1);
            c++;
        }
    }
    if(c == 0)
        printf("not found");
    else
        printf("\ntotal occurrences = %d", c);

    return 0;
}
