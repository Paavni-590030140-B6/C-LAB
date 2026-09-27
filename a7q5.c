//largest, second largest, smallest, second smallest.
#include <stdio.h>
int main()
{
    int a[20],n,i,max,min,max2,min2;
    printf("enter number: ");
    scanf("%d",&n);
    printf("enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=min=a[0];

    for(i=1;i<n;i++)
    {
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
    }
    max2=min;
    min2=max;
    for(i=0;i<n;i++)
    {
        if(a[i]>max2 && a[i]<max) max2=a[i];
        if(a[i]<min2 && a[i]>min) min2=a[i];
    }
    printf("largest = %d",max);
    printf("\nsecond largest = %d",max2);
    printf("\nsmallest = %d",min);
    printf("\nsecond smallest = %d",min2);

    return 0;
}