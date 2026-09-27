//Addition of Two matrices
#include <stdio.h>

int main()
{
    int a[10][10],b[10][10],r,c,i,j;
    printf("enter rows: ");
    scanf("%d",&r);
    printf("enter columns: ");
    scanf("%d",&c);
    printf("enter first matrix: ");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    printf("enter second matrix: ");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&b[i][j]);
    printf("sum matrix:\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",a[i][j]+b[i][j]);

        printf("\n");
    }

    return 0;
}