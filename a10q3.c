//Reverse an Array using Recursion
#include <stdio.h>
void reverse(int a[], int i, int n)
{
    int temp;
    if(i>=n/2)
        return;
    temp=a[i];
    a[i]=a[n-i-1];
    a[n-i-1]=temp;
    reverse(a,i+1,n);
}
int main()
{
    int a[100],n,i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    reverse(a,0,n);
    printf("Reversed array: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
