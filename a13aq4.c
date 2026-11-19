//Separate Even and Odd Elements
#include <stdio.h>
void separate_elements(int *arr,int n,int *even,int *even_count,int *odd,int *odd_count)
{
    int i;
    *even_count=0;
    *odd_count=0;
    for(i=0;i<n;i++)
    {
        if(*(arr+i)%2==0)
        {
            *(even+*even_count)=*(arr+i);
            (*even_count)++;
        }
        else
        {
            *(odd+*odd_count)=*(arr+i);
            (*odd_count)++;
        }
    }
}
int main()
{
    int a[100],even[100],odd[100],n,i,ec,oc;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    if(n<1||n>100)
        return 1;
    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    separate_elements(a,n,even,&ec,odd,&oc);

    printf("Original array: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    printf("\nEven elements: ");
    for(i=0;i<ec;i++)
        printf("%d ",even[i]);

    printf("\nOdd elements: ");
    for(i=0;i<oc;i++)
        printf("%d ",odd[i]);

    printf("\nEven count = %d",ec);
    printf("\nOdd count = %d",oc);
    return 0;
}
