//Recursive Binary Search
#include <stdio.h>
int search(int a[],int low,int high,int key)
{
    int mid;
    if(low>high)
        return -1;
    mid=(low+high)/2;
    if(a[mid]==key)
        return mid;
    if(key<a[mid])
        return search(a,low,mid-1,key);
    else
        return search(a,mid+1,high,key);
}
int main()
{
    int a[100],n,i,key,pos;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter sorted elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter element to search: ");
    scanf("%d",&key);
    pos=search(a,0,n-1,key);
    if(pos==-1)
        printf("Element not found");
    else
        printf("Element found at position %d",pos+1);
    return 0;
}
