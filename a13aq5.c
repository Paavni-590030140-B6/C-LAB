//Remove Duplicate Elements
#include <stdio.h>
void remove_duplicates(int *arr,int n,int *result,int *new_size)
{
    int i,j,found;
    *new_size=0;
    for(i=0;i<n;i++)
    {
        found=0;
        for(j=0;j<*new_size;j++)
        {
            if(*(arr+i)==*(result+j))
            {
                found=1;
                break;
            }
        }
        if(found==0)
        {
            *(result+*new_size)=*(arr+i);
            (*new_size)++;
        }
    }
}
int main()
{
    int a[100],result[100],n,i,new_size;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    if(n<1||n>100)
        return 1;
    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    remove_duplicates(a,n,result,&new_size);

    printf("Original array: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    printf("\nArray without duplicates: ");
    for(i=0;i<new_size;i++)
        printf("%d ",result[i]);

    printf("\nNumber of distinct elements = %d",new_size);
    return 0;
}
