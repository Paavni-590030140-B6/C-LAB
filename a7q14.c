//Diagonal and Triangular Matrix
#include <stdio.h>
int main()
{
    int a[10][10],n,i,j,m=0,s=0,u=1,l=1,d=1;
    printf("enter number: ");
    scanf("%d",&n);
    printf("enter elements: ");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
    {
        m+=a[i][i];
        s+=a[i][n-1-i];
        for(j=0;j<n;j++)
        {
            if(i>j && a[i][j]!=0) u=0;
            if(i<j && a[i][j]!=0) l=0;
            if(i!=j && a[i][j]!=0) d=0;
        }
    }
    printf("main sum = %d",m);
    printf("\nsecond sum = %d",s);
    if(d==1)
        printf("\ndiagonal");
    else if(u==1)
        printf("\nupper triangular");
    else if(l==1)
        printf("\nlower triangular");
    else
        printf("\nnone");

    return 0;
}