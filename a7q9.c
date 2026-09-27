//Displaying a 2D array
#include <stdio.h>

int main()
{
    int a[10][10],r,c,i,j;

    printf("enter rows: ");
    scanf("%d",&r);

    printf("enter columns: ");
    scanf("%d",&c);

    printf("enter elements: ");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    printf("matrix:\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",a[i][j]);

        printf("\n");
    }

    return 0;
}