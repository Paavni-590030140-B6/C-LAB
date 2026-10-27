//Column with Minimum Sum using Recursion
#include <stdio.h>
int a[10][10];
int sum(int i,int j,int r)
{
    if(i==r)
        return 0;
    return a[i][j]+sum(i+1,j,r);
}
int main()
{
    int r,c,i,j,min,col=0,s;
    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);
    printf("Enter elements:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    min=sum(0,0,r);
    for(j=1;j<c;j++)
    {
        s=sum(0,j,r);
        if(s<min)
        {
            min=s;
            col=j;
        }
    }
    printf("Column with minimum sum = %d\n",col+1);
    printf("Minimum sum = %d",min);
    return 0;
}
