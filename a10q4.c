//Second-Largest Element using Recursion
#include <stdio.h>
#include <limits.h>
void second(int a[],int n,int i,int *max,int *s)
{
    if(i==n)
        return;
    if(a[i]>*max)
    {
        *s=*max;
        *max=a[i];
    }
    else if(a[i]!=*max && a[i]>*s)
        *s=a[i];
    second(a,n,i+1,max,s);
}
int main()
{
    int a[100],n,i,max=INT_MIN,s=INT_MIN;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    second(a,n,0,&max,&s);
    if(s==INT_MIN)
        printf("No second largest element");
    else
        printf("Second largest = %d",s);
    return 0;
}
