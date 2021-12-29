#include<stdio.h>
int main()
{
    int Age;
    printf("Please enter your age:");
    scanf("%d",&Age);
    if(Age>0 && Age<=12)
    printf("\nYou are a child.");
    if(Age>12 && Age<=19)
    printf("\nYou are a teen ager.");
    return 0;
}
