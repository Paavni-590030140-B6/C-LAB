//Register Storage Class
#include <stdio.h>
int main()
{
    int a[100],n;
    register int i;
    int sum=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    if(n<1||n>100)
        return 1;
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        sum=sum+a[i];
    printf("Sum = %d\n",sum);
    return 0;
}
