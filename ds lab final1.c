#include<stdio.h>
#include<conio.h>
void main()
{
    int a[30],i,n,min;

    printf(" Enter the number  of elements in array :");
    scanf("%d",&n);

    printf(" \n Enter the Elements: ");
    for(i=0 ; i < n ; i++)
        scanf("%d",&a[i]);

    min = a[0];

    for(i = 0 ; i < n ; i++)
    {
        if ( a[i] < min )
            min = a[i];
    }

    printf(" Minimum element in the array is : %d",min);

    getch();
}
