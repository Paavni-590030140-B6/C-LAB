//Write a program to delete the element from an array.
#include <stdio.h>

int main()
{
    int a[20],n,i,p;

    printf("enter number: ");
    scanf("%d",&n);

    printf("enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("enter position: ");
    scanf("%d",&p);

    if(p<1 || p>n)
        printf("invalid position");
    else
    {
        for(i=p-1;i<n-1;i++)
            a[i]=a[i+1];

        n--;

        printf("new array: ");
        for(i=0;i<n;i++)
            printf("%d ",a[i]);
    }

    return 0;
}