#include <stdio.h>
int main()
{
    int r;
    float a;
    double pi = 3.14159;
    printf("Enter area number of the circle : \n");
    scanf("%d",&r);
    a=pi*r*r;
    printf("\nArea:%f",a);
    return 0 ;
}
