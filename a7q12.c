//Row-wise and Column-wise Sums.
#include <stdio.h>
int main()
{
    int a[10][10],r,c,i,j,sum;
    printf("enter rows: ");
    scanf("%d",&r);
    printf("enter columns: ");
    scanf("%d",&c);
    printf("enter elements: ");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<r;i++)
    {
        sum=0;
        for(j=0;j<c;j++)
            sum+=a[i][j];
        printf("\nrow %d sum = %d",i+1,sum);
    }
    for(j=0;j<c;j++)
    {
        sum=0;
        for(i=0;i<r;i++)
            sum+=a[i][j];

        printf("\ncolumn %d sum = %d",j+1,sum);
    }
    return 0;
}