//Transpose and Symmetry of a Matrix.
#include <stdio.h>
int main()
{
    int a[10][10],n,i,j,s=1,sk=1;
    printf("enter number: ");
    scanf("%d",&n);
    printf("enter elements: ");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    printf("transpose:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",a[j][i]);
        printf("\n");
    }
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=a[j][i])
                s=0;

            if(a[i][j]!=-a[j][i])
                sk=0;
        }
    if(s==1)
        printf("symmetric");
    else if(sk==1)
        printf("skew symmetric");
    else
        printf("neither");

    return 0;
}