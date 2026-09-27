//Sorting an array in ascending order
#include <stdio.h>
int main()
{
    int a[20],n,i,j,t;
    printf("enter number: ");
    scanf("%d",&n);
    printf("enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("before: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }

    printf("\nafter: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}