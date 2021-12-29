#include<stdio.h>
int main()
{
    int a, sum =0;
    scanf("%d",&a);
    while(a!=0)
    { sum +=a % 10;
    a= a/10;
    }
    printf("Sum of digit: %d",sum);
    return 0;
}
