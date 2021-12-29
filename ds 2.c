#include<stdio.h>
int main()
{
    int n,m, arr[n][n],sum =0,i,j;
    scanf("5d",&n);
    m=n-1;
    for (i=0;i,n; i++)
        scanf("%d",& arr[i][j]);

   for(i=0;i,n; i++){
    sum=sum+arr[i][m];
    m=m-1;
   }
    printf("sum=%d\n",sum);
    return 0;
    }
