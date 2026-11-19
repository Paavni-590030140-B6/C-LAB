//Count Special Elements in a Matrix
#include <stdio.h>
void count_elements(int rows,int cols,int matrix[rows][cols],int *positive,int *negative,int *zero,int *even)
{
    int i,j,x;
    *positive=0;
    *negative=0;
    *zero=0;
    *even=0;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            x=*(*(matrix+i)+j);
            if(x>0)
                (*positive)++;
            else if(x<0)
                (*negative)++;
            else
                (*zero)++;
            if(x%2==0)
                (*even)++;
        }
    }
}
int main()
{
    int r,c,i,j,p,n,z,e;
    printf("Enter rows and columns (1 to 10): ");
    scanf("%d%d",&r,&c);
    if(r<1||r>10||c<1||c>10)
        return 1;
    int a[r][c];

    printf("Enter matrix elements:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }

    count_elements(r,c,a,&p,&n,&z,&e);

    printf("Positive elements = %d\n",p);
    printf("Negative elements = %d\n",n);
    printf("Zero elements = %d\n",z);
    printf("Even elements = %d\n",e);
    return 0;
}
