#include<stdio.h>
void main ()
{
    int i,j,ar[3][3],sum=0;
    printf("Enter the elements of the matrix \n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }

    printf("Matrix formed is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d \t",ar[i][j]);
        }
        printf("\n");
    }

    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            sum = sum+ar[i][j];
        }
    }
    printf(" Sum is %d\n",sum);
    return 0;
}
