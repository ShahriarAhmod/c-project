#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the two integer number");
    scanf("%d%d",&num1,&num2);
    if(num1%num2==0){
        printf("%d is Multiple of %d",num1,num2);
    }
        else{
            printf("%d is not Multiple of %d",num1,num2);
        }
        return 0;
}
