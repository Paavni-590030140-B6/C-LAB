//Reverse an array
#include <stdio.h>

int main()
{
    int a[20],n,i,t;

    printf("enter number: ");
    scanf("%d",&n);

    printf("enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("before: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    for(i=0;i<n/2;i++)
    {
        t=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=t;
    }

    printf("\nafter: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}