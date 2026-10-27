//Occurrences of the Maximum Element in an Array using Recursion
#include <stdio.h>
void find(int a[],int n,int i,int *max,int *count)
{
    if(i==n)
        return;
    if(a[i]>*max)
    {
        *max=a[i];
        *count=1;
    }
    else if(a[i]==*max)
        (*count)++;
    find(a,n,i+1,max,count);
}
int main()
{
    int a[100],n,i,max,count=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=a[0];
    find(a,n,0,&max,&count);
    printf("Maximum element = %d\n",max);
    printf("Occurrences = %d",count);
    return 0;
}
