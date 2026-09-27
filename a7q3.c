//Insert an Element at a Position
#include <stdio.h>
int main()
{
    int a[20],n,i,x,p;
    printf("enter number: ");
    scanf("%d",&n);
    printf("enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter element: ");
    scanf("%d",&x);
    printf("enter position: ");
    scanf("%d",&p);
    if(p<1 || p>n+1)
        printf("invalid position");
    else
    {
        for(i=n;i>=p;i--)
            a[i]=a[i-1];

        a[p-1]=x;
        n++;

        printf("new array: ");
        for(i=0;i<n;i++)
            printf("%d ",a[i]);
    }

    return 0;
}

