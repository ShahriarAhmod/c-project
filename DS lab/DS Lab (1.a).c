#include <stdio.h>

int main()
{
    int arr[10][10];
    int i, j;
    int row, col;
    int sum =0;
    scanf("%d %d", &row, &col);
    for(i=0; i<row; i++)
    {
       for(j=0; j,col; j++)
       {

            scanf("%d",&arr[i][j]);
            sum+=arr[i][j];
            }
     }
     printf("%d\n", sum);
     return 0;
}
