#include <stdio.h>

int main()
{
    int ar[100], min, max , size, i, x;
    scanf("%d\n", &size);
    for (i = 0; i< size; i++)
        scanf("%d", &ar[i]);

    min = ar[0];
    max = ar[0];

    for (i = 1; i < size; i++)
    {
        if (ar[i] < min)
        {
           min = ar[i];

        }
    }
    for (i = 1; i<size; i++)
    {
        if(ar[i] > min)
            max = ar[i];
    }

    x = max-min;
    printf("\n%d", x);
    return 0;

}

