#include <stdio.h>

int max(int a, int b)
{
    return a > b ? a : b;
}

int zeroOneKnapsack(int W, int wt[], int val[], int n)
{
    int i, w;
    int K[n + 1][W + 1];

    for (i = 0; i <= n; i++)
    {
        for (w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
            {
                K[i][w] = 0;
            }
            else if (wt[i - 1] <= w)
            {
                K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]);
            }
            else
            {
                K[i][w] = K[i - 1][w];
            }
        }
    }
    int res = K[n][W];
    w = W;
    for (i = n; i > 0 && K[n][W] > 0; i--)
    {

        if (K[n][W] == K[i - 1][w])
            continue;
        else
        {
            w = w - wt[i - 1];
            printf("Selected object %d (%d Tk., %dKg) . Space left: %d.\n", i, val[i - 1], wt[i - 1], w);
            K[n][W] = K[n][W] - val[i - 1];
        }
    }
    return res;
}
int main()
{
    int capacity, no_items;
    int weight[10];
    int value[10];
    int i;

    printf("Enter the capacity of knapsack:\n");
    scanf("%d", &capacity);

    printf("Enter the number of items:\n");
    scanf("%d", &no_items);

    printf("Enter the weight and value of %d item:\n", no_items);

    for (i = 0; i < no_items; i++)
    {
        printf("Weight[%d]:\t", i);
        scanf("%d", &weight[i]);
        printf("Value[%d]:\t", i);
        scanf("%d", &value[i]);
    }

    printf("The maximum value that can be put in the knapsack is %d.\n", zeroOneKnapsack(capacity, weight, value, no_items));

    return 0;
}
