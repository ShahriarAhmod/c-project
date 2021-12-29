#include <stdio.h>
main()
{
    int x,y;
    printf("Enter the integer number: ");
    scanf("%d%d",&x,&y);
    if(x<y)
    {
    printf("The greater number is: %d",y);
    }
    else {
    printf("The greater number is: %d",x);}
    return 0;
}
