//Merging two arrays
#include <stdio.h>

int main()
{
    int a[20],b[20],c[40],n,m,i;

    printf("enter first number: ");
    scanf("%d",&n);

    printf("enter first array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        c[i]=a[i];
    }

    printf("enter second number: ");
    scanf("%d",&m);

    printf("enter second array: ");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
        c[n+i]=b[i];
    }

    printf("merged array: ");
    for(i=0;i<n+m;i++)
        printf("%d ",c[i]);

    return 0;
}