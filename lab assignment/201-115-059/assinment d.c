#include<stdio.h>
int main()
{
    int n, x,y;
    scanf("%d",&n);
    for( x=1; x<=n;x++){
    for( y=1; y<=n; y++){
    if(x == 1 || x ==n || y ==1 || y ==n)
    printf("*");
    else
    printf(" ");
    }
    printf("\n");
    }
    return 0;
}

