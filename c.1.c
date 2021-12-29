
#include<stdio.h>
int main()
{
    int a,b,c,sum;
    float avg;
    printf("Enter three integer");
    scanf("%d%d%d,&a,&b,&c");
    sum = a+b+c;
    avg =sum/3;
    printf("\n The summation of three number is =%d",sum);
    printf("\n Average of three number is =%f",avg);
    return 0;

}
