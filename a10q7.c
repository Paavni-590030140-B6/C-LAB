//Symmetric Matrix (Recursion)
#include <stdio.h>
int check(int a[10][10],int n,int i,int j)
{
    if(i==n)
        return 1;
    if(j==n)
        return check(a,n,i+1,0);
    if(a[i][j]!=a[j][i])
        return 0;
    return check(a,n,i,j+1);
}
int main()
{
    int a[10][10],n,i,j;
    printf("Enter size of matrix: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    if(check(a,n,0,0))
        printf("Symmetric matrix");
    else
        printf("Not symmetric matrix");
    return 0;
}
